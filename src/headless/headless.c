#include "../system.h"

u16 systemGbPalette[24];
int systemSaveUpdateCounter;
int systemDebug;
int systemColorDepth;
u16 systemColorMap16[0x10000];
u32 systemColorMap32[0x10000];
int systemFrameSkip;
bool systemSoundOn;
int systemRedShift;
int systemGreenShift;
int systemBlueShift;

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

void CPUCheckDMA(int reason,int mask) {}

void systemSoundShutdown() {}
void systemSoundPause() {}
void systemSoundResume() {}
void systemSoundReset() {}
bool systemSoundInit() { return true;}
