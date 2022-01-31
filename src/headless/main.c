#include <stdlib.h>
#include <stdio.h>

#include "../gb/gb_globals.h"
#include "../gb/gb.h"
#include "../util.h"
#include "../flash.h"
#include "../rtc.h"
#include "../sound.h"

extern u8 *pix;

static void ppm_print24(u8 *data, int width, int height, FILE *fp) {
  int y;
  int x;
  u8 *pos;

  fprintf(fp, "P3\n%d %d\n255\n", width, height);
  for (y = 0; y < height; y++) {
    pos = data + y*3*width;
    for (x = 0; x < width; x++) {
      fprintf(fp, "%d %d %d\n", pos[0], pos[1], pos[2]);
      pos += 3;
    }
  }
}

int main(void) {
  const char *szFile;
  bool ok;
  int status = EXIT_FAILURE;
  enum IMAGE_TYPE type;
  unsigned int ticks = 0;
  int i;

  flashSetSize(0x10000);
  rtcEnable(true);

  for(i = 0; i < 0x10000; i++) {
    systemColorMap32[i] = ((i & 0x1f) << systemRedShift) |
      (((i & 0x3e0) >> 5) << systemGreenShift) |
      (((i & 0x7c00) >> 10) << systemBlueShift);
  }

  systemSaveUpdateCounter = SYSTEM_SAVE_NOT_UPDATED;

  szFile = "rom.gb"; /* hardcode for now, goal is to have xxd -i ROM */
  type = utilFindType(szFile);
  if(type != IMAGE_GB) {
    goto done;
  }

  ok = gbLoadRom(szFile);
  if (!ok) {
    goto done;
  }

  gbReset();
  soundInit();
  emulating = 1;
  while(emulating && ticks < 50000) {
    gbEmulate(1000);
    ticks++;
  }

  ppm_print24(pix, 160, 144, stdout);

  gbCleanUp();
  soundShutdown();
  status = EXIT_SUCCESS;
done:
  return status;
}
