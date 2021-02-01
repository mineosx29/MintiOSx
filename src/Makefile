# Makefile basée de JamesM's kernel tutorials.


SOURCES=boot.o main.o monitor.o common.o descriptor_tables.o isr.o interrupt.o gdt.o

CC=i686-elf-gcc
LD=i686-elf-ld
CFLAGS=-Wall -Wextra -ffreestanding
LDFLAGS=-Tlink.ld
ASFLAGS=-felf32

all: $(SOURCES) link

clean:
	-rm *.o kernel

link:
	$(LD) $(LDFLAGS) -o kernel $(SOURCES)

.s.o:
	nasm $(ASFLAGS) $<
