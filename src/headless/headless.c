#include "../system.h"

u16 systemGbPalette[24] = {
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
    0x1f | (0x1f << 5) | (0x1f << 10),
    0x15 | (0x15 << 5) | (0x15 << 10),
    0x0c | (0x0c << 5) | (0x0c << 10),
    0,
};

int systemSaveUpdateCounter;
int systemDebug;
int systemColorDepth = 24;
u16 systemColorMap16[0x10000];
u32 systemColorMap32[0x10000];
int systemFrameSkip;
bool systemSoundOn;
int systemRedShift = 3;
int systemGreenShift = 11;
int systemBlueShift = 19;

int emulating;
void (*cpuSaveGameFunc)(u32,u8);
bool stopState;

u32 systemGetClock() {
  static u32 clk = 0;
  return ++clk; /* TODO: Implement */
}

void systemMessage(int num, const char * msg, ...) {}
void log_print(const char *msg,...) {}
void systemDrawScreen() {}
void systemFrame() {}
void system10Frames(int rate) {}
void systemShowSpeed(int speed) {}
bool systemReadJoypads() { return true; }
u32 systemReadJoypad(int which) {return 0;}
void systemUpdateMotionSensor() {}

void systemScreenCapture(int a) {}
void systemWriteDataToSoundBuffer() {}
bool systemCanChangeSoundQuality() {return true; }
int  systemGetSensorX() { return 0;}
int  systemGetSensorY() { return 0;}
void systemGbPrint(u8 *data,int pages,int feed,int palette, int contrast) {}
void systemGbBorderOn() {}

void CPUCheckDMA(int reason,int mask) {} /* XXX: This is GBA */

void systemSoundShutdown() {}
void systemSoundPause() {}
void systemSoundResume() {}
void systemSoundReset() {}
bool systemSoundInit() { return true;}
