.PHONY: all clean

LDFLAGS+= \
	$$(pkg-config --libs sdl libpng) \
    -lm

CFLAGS+= \
	-Wall \
	-Werror \
    -I/usr/local/include \
    -I/usr/local/include/libpng16/ \
    -DSDL \
    -DC_CORE \
    -DSYSCONFDIR=\"/etc\"

CFILES = \
    pixel.c \
    memgzio.c

CPPFILES = \
    2xSaI.cpp \
    CheatSearch.cpp \
    Cheats.cpp \
    EEprom.cpp \
    Flash.cpp \
    GBA.cpp \
    Gfx.cpp \
    Globals.cpp \
    Mode0.cpp \
    Mode1.cpp \
    Mode2.cpp \
    Mode3.cpp \
    Mode4.cpp \
    Mode5.cpp \
    RTC.cpp \
    Sound.cpp \
    Sram.cpp \
    Text.cpp \
    Util.cpp \
    admame.cpp \
    agbprint.cpp \
    armdis.cpp \
    bilinear.cpp \
    bios.cpp \
    elf.cpp \
    expr-lex.cpp \
    expr.cpp \
    exprNode.cpp \
    hq2x.cpp \
    interframe.cpp \
    motionblur.cpp \
    remote.cpp \
    scanline.cpp \
    simple2x.cpp \
    unzip.cpp \
    sdl/debugger.cpp \
    gb/GB.cpp \
    gb/gbCheats.cpp \
    gb/gbDis.cpp \
    gb/gbGfx.cpp \
    gb/gbGlobals.cpp \
    gb/gbMemory.cpp \
    gb/gbPrinter.cpp \
    gb/gbSGB.cpp \
    gb/gbSound.cpp

HFILES = \
    AutoBuild.h \
    CheatSearch.h \
    Cheats.h \
    EEprom.h \
    Flash.h \
    GBA.h \
    GBAinline.h \
    Gfx.h \
    Globals.h \
    NLS.h \
    Port.h \
    RTC.h \
    Sound.h \
    Sram.h \
    System.h \
    Text.h \
    Util.h \
    agbprint.h \
    arm-new.h \
    armdis.h \
    bios.h \
    elf.h \
    expr.cpp.h \
    exprNode.h \
    hq2x.h \
    interp.h \
    lq2x.h \
    memgzio.h \
    thumb.h \
    unzip.h \
    sdl/debugger.h \
    gb/GB.h \
    gb/gbCheats.h \
    gb/gbCodes.h \
    gb/gbCodesCB.h \
    gb/gbGlobals.h \
    gb/gbMemory.h \
    gb/gbPrinter.h \
    gb/gbSGB.h \
    gb/gbSound.h

COBJS = ${CFILES:.c=.o}
CPPOBJS = ${CPPFILES:.cpp=.o}

all: VisualBoyAdvance

$(CFILES): $(HFILES)
$(CPPFILES): $(HFILES)
VisualBoyAdvance: $(COBJS) $(CPPOBJS)  sdl/SDL.o
	$(CC) -o $@ $(CFLAGS2) $(COBJS) $(CPPOBJS) sdl/SDL.o $(LDFLAGS)

clean:
	rm -f $(COBJS) $(CPPOBJS) sdl/SDL.o VisualBoyAdvance
