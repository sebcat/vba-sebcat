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
    ../gb/gb.c \
    ../gb/gb_sound.c \
    ../gb/gb_cheats.c \
    ../gb/gb_dis.c \
    ../gb/gb_gfx.c \
    ../gb/gb_globals.c \
    ../gb/gb_memory.c \
    ../gb/gb_printer.c \
    ../gb/gb_sgb.c \
    ../util.c \
    ../sound.c \
    ../unzip.c \
    ../memgzio.c \
    ../globals.c \
    ../rtc.c \
    ../flash.c \
    ../sram.c \
    headless.c \
    main.c

HDRS = \
    ../gb/gb.h \
    ../gb/gb_cheats.h \
    ../gb/gb_codes.h \
    ../gb/gb_codes_cb.h \
    ../gb/gb_globals.h \
    ../gb/gb_memory.h \
    ../gb/gb_printer.h \
    ../gb/gb_sgb.h \
    ../gb/gb_sound.h \
    ../util.h \
    ../unzip.h \
    ../memgzio.h \
    ../globals.h \
    ../rtc.h \
    ../flash.h \
    ../sram.h \
    ../sound.h

OBJS = ${SRCS:.c=.o}

all: VisualBoyAdvance

$(SRCS): $(HDRS)
VisualBoyAdvance: $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS) sdl/sdl.o VisualBoyAdvance
