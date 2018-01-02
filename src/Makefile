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

SRCS = \
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
    hq2x.h \
    interp.h \
    lq2x.h \
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

$(SRCS): $(HDRS)
VisualBoyAdvance: $(OBJS) sdl/sdl.o
	$(CC) -o $@ $(CFLAGS) $(OBJS) sdl/sdl.o $(LDFLAGS)

clean:
	rm -f $(OBJS) sdl/sdl.o VisualBoyAdvance
