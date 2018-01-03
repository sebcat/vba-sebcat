#ifndef FILTERS_FILTERS_H__
#define FILTERS_FILTERS_H__

#ifdef __cplusplus
extern "C" {
#endif

void MotionBlur(u8*,u32,u8*,u8*,u32,int,int);
void MotionBlur32(u8*,u32,u8*,u8*,u32,int,int);
void Pixelate(u8*,u32,u8*,u8*,u32,int,int);
void Pixelate32(u8*,u32,u8*,u8*,u32,int,int);
void Simple2x(u8*,u32,u8*,u8*,u32,int,int);
void Simple2x32(u8*,u32,u8*,u8*,u32,int,int);
void Scanlines(u8*,u32,u8*,u8*,u32,int,int);
void Scanlines32(u8*,u32,u8*,u8*,u32,int,int);
void ScanlinesTV(u8*,u32,u8*,u8*,u32,int,int);
void ScanlinesTV32(u8*,u32,u8*,u8*,u32,int,int);
void SmartIB(u8*,u32,int,int);
void SmartIB32(u8*,u32,int,int);
void MotionBlurIB(u8*,u32,int,int);
void MotionBlurIB32(u8*,u32,int,int);
void hq2x(u8*,u32,u8*,u8*,u32,int,int);
void hq2x32(u8*,u32,u8*,u8*,u32,int,int);
void lq2x(u8*,u32,u8*,u8*,u32,int,int);
void lq2x32(u8*,u32,u8*,u8*,u32,int,int);
int Init_2xSaI(u32);
void _2xSaI(u8*,u32,u8*,u8*,u32,int,int);
void _2xSaI32(u8*,u32,u8*,u8*,u32,int,int);
void Super2xSaI(u8*,u32,u8*,u8*,u32,int,int);
void Super2xSaI32(u8*,u32,u8*,u8*,u32,int,int);
void SuperEagle(u8*,u32,u8*,u8*,u32,int,int);
void SuperEagle32(u8*,u32,u8*,u8*,u32,int,int);
void Bilinear(u8*,u32,u8*,u8*,u32,int,int);
void Bilinear32(u8*,u32,u8*,u8*,u32,int,int);
void BilinearPlus(u8*,u32,u8*,u8*,u32,int,int);
void BilinearPlus32(u8*,u32,u8*,u8*,u32,int,int);
void AdMame2x(u8*,u32,u8*,u8*,u32,int,int);
void AdMame2x32(u8*,u32,u8*,u8*,u32,int,int);

#ifdef __cplusplus
}
#endif

#endif
