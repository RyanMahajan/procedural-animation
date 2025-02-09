
CC = gcc
LDLIBS = -lglut -lGL -lGLU -lm
HEADERS = opengl.h globals.h constants.h prototypes.h
OBJS = init.o display.o mouse.o

debug ?= n
ifeq ($(debug), y)
	CFLAGS += -g -DDEBUG
else
	CFLAGS += -O2
endif

all: proc-anim tags

proc-anim: main.o $(OBJS)
	$(CC) $(CFLAGS) main.o $(OBJS) -o proc-anim $(LDLIBS)

main.o: main.c $(HEADERS)
	$(CC) $(CFLAGS) main.c -c

init.o: init.c $(HEADERS)
	$(CC) $(CFLAGS) init.c -c

display.o: display.c $(HEADERS)
	$(CC) $(CFLAGS) display.c -c

clean: 
	rm *.o

pristine:
	rm *.o
	touch *

tags:
	ctags *.h *.c
