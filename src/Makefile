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
    2xSaI.c \
    agbprint.c \
    admame.c \
    bios.c \
    cheat_search.c \
    cheats.c \
    eeprom.c \
    expr_node.c \
    expr-lex.c \
    expr.c \
    flash.c \
    gba.c \
    gfx.c \
    globals.c \
    pixel.c \
    sound.c \
    bilinear.c \
    elf.c \
    armdis.c \
    scanline.c \
    mode0.c \
    mode1.c \
    mode2.c \
    mode3.c \
    mode4.c \
    mode5.c \
    memgzio.c \
    hq2x.c \
    simple2x.c \
    text.c \
    rtc.c \
    sram.c \
    motionblur.c \
    interframe.c \
    sdl/debugger.c \
    remote.c \
    unzip.c \
    util.c

CPPFILES = \
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
    auto_build.h \
    cheat_search.h \
    cheats.h \
    eeprom.h \
    flash.h \
    gba.h \
    gba_inline.h \
    gfx.h \
    globals.h \
    NLS.h \
    port.h \
    rtc.h \
    sound.h \
    sram.h \
    system.h \
    text.h \
    util.h \
    agbprint.h \
    arm-new.h \
    armdis.h \
    bios.h \
    elf.h \
    expr.h \
    expr_node.h \
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
	$(CC) -o $@ $(CFLAGS) $(COBJS) $(CPPOBJS) sdl/SDL.o $(LDFLAGS)

clean:
	rm -f $(COBJS) $(CPPOBJS) sdl/SDL.o VisualBoyAdvance
