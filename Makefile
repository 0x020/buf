CC = gcc
CFLAGS = -Wall -g
SRC := $(wildcard *.c)
OBJS = $(patsubst %.c,%,$(SRC))

.PHONY: all clean

all: $(OBJS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJS)
