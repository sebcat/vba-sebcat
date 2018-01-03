// -*- C++ -*-
// VisualBoyAdvance - Nintendo Gameboy/GameboyAdvance (TM) emulator.
// Copyright (C) 1999-2003 Forgotten
// Copyright (C) 2004 Forgotten and the VBA development team

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or(at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#ifndef VBA_RTC_H
#define VBA_RTC_H

#ifdef __cplusplus
extern "C" {
#endif

extern u16 rtcRead(u32 address);
extern bool rtcWrite(u32 address, u16 value);
extern void rtcEnable(bool);
extern bool rtcIsEnabled();
extern void rtcReset();

extern void rtcReadGame(gzFile gzFile);
extern void rtcSaveGame(gzFile gzFile);

#ifdef __cplusplus
}
#endif

#endif