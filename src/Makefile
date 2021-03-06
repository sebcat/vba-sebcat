.PHONY: all clean

LDADD    != pkg-config --libs sdl2 libpng zlib
INCLUDES != pkg-config --cflags libpng sdl2 zlib

LDFLAGS += $(LDADD) -lm

CFLAGS += \
    $(INCLUDES) \
    -Wall \
    -Werror \
    -DSDL \
    -DSYSCONFDIR=\"/etc\"

SRCS = \
    filters/2xSaI.c \
    agbprint.c \
    filters/admame.c \
    bios.c \
    cheat_search.c \
    cheats.c \
    eeprom.c \
    expr_node.c \
    expr-lex.c \
    expr.c \
    flash.c \
    gb/gb.c \
    gb/gb_sound.c \
    gb/gb_cheats.c \
    gb/gb_dis.c \
    gb/gb_gfx.c \
    gb/gb_globals.c \
    gb/gb_memory.c \
    gb/gb_printer.c \
    gb/gb_sgb.c \
    gba.c \
    gfx.c \
    globals.c \
    filters/pixel.c \
    sound.c \
    filters/bilinear.c \
    elf.c \
    armdis.c \
    filters/scanline.c \
    mode0.c \
    mode1.c \
    mode2.c \
    mode3.c \
    mode4.c \
    mode5.c \
    memgzio.c \
    filters/hq2x.c \
    filters/simple2x.c \
    text.c \
    rtc.c \
    sram.c \
    filters/motionblur.c \
    filters/interframe.c \
    sdl/debugger.c \
    remote.c \
    unzip.c \
    util.c

HDRS = \
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
    filters/hq2x_int.h \
    filters/interp.h \
    filters/lq2x_int.h \
    memgzio.h \
    thumb.h \
    unzip.h \
    sdl/debugger.h \
    gb/gb.h \
    gb/gb_cheats.h \
    gb/gb_codes.h \
    gb/gb_codes_cb.h \
    gb/gb_globals.h \
    gb/gb_memory.h \
    gb/gb_printer.h \
    gb/gb_sgb.h \
    gb/gb_sound.h

OBJS = ${SRCS:.c=.o}

all: VisualBoyAdvance

# workaround for set but unused C_OUT variable
gba.o: gba.c arm-new.h thumb.h
	$(CC) -Wno-unused $(CFLAGS) -c -o gba.o gba.c

$(SRCS): $(HDRS)
VisualBoyAdvance: $(OBJS) sdl/sdl.o
	$(CC) -o $@ $(CFLAGS) $(OBJS) sdl/sdl.o $(LDFLAGS)

clean:
	rm -f $(OBJS) sdl/sdl.o VisualBoyAdvance
