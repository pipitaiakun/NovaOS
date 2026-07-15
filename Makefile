CC = clang

CFLAGS = -ffreestanding -Wall -Wextra -Ikernel

BUILD = build

SRC = \
kernel/main.c \
kernel/arch/x86_64/cpu.c \
kernel/mm/memory.c \
kernel/mm/bitmap.c \
kernel/mm/heap.c \
kernel/video/video.c \
kernel/lib/string.c \
kernel/core/log.c \
kernel/core/panic.c \
kernel/io/kprintf.c \
kernel/io/console.c \
kernel/io/buffer.c \
kernel/scheduler/scheduler.c \
kernel/syscall/syscall.c \
kernel/vfs/vfs.c \
kernel/init/init.c\
kernel/drivers/vga/vga.c \
kernel/drivers/keyboard/keyboard.c \
kernel/drivers/timer/timer.c \
kernel/drivers/pic/pic.c

OBJ = \
$(BUILD)/main.o \
$(BUILD)/cpu.o \
$(BUILD)/memory.o \
$(BUILD)/bitmap.o \
$(BUILD)/heap.o \
$(BUILD)/video.o \
$(BUILD)/string.o \
$(BUILD)/log.o \
$(BUILD)/panic.o \
$(BUILD)/kprintf.o \
$(BUILD)/console.o \
$(BUILD)/buffer.o \
$(BUILD)/scheduler.o \
$(BUILD)/syscall.o \
$(BUILD)/vfs.o \
$(BUILD)/init.o\
$(BUILD)/vga_driver.o \
$(BUILD)/keyboard.o \
$(BUILD)/timer.o \
$(BUILD)/pic.o

all: $(OBJ)

$(BUILD)/main.o:
	$(CC) $(CFLAGS) -c kernel/main.c -o $(BUILD)/main.o

$(BUILD)/cpu.o:
	$(CC) $(CFLAGS) -c kernel/arch/x86_64/cpu.c -o $(BUILD)/cpu.o

$(BUILD)/memory.o:
	$(CC) $(CFLAGS) -c kernel/mm/memory.c -o $(BUILD)/memory.o

$(BUILD)/bitmap.o:
	$(CC) $(CFLAGS) -c kernel/mm/bitmap.c -o $(BUILD)/bitmap.o

$(BUILD)/heap.o:
	$(CC) $(CFLAGS) -c kernel/mm/heap.c -o $(BUILD)/heap.o

$(BUILD)/video.o:
	$(CC) $(CFLAGS) -c kernel/video/video.c -o $(BUILD)/video.o

$(BUILD)/string.o:
	$(CC) $(CFLAGS) -c kernel/lib/string.c -o $(BUILD)/string.o

$(BUILD)/log.o:
	$(CC) $(CFLAGS) -c kernel/core/log.c -o $(BUILD)/log.o

$(BUILD)/panic.o:
	$(CC) $(CFLAGS) -c kernel/core/panic.c -o $(BUILD)/panic.o

$(BUILD)/kprintf.o:
	$(CC) $(CFLAGS) -c kernel/io/kprintf.c -o $(BUILD)/kprintf.o

$(BUILD)/console.o:
	$(CC) $(CFLAGS) -c kernel/io/console.c -o $(BUILD)/console.o

$(BUILD)/buffer.o:
	$(CC) $(CFLAGS) -c kernel/io/buffer.c -o $(BUILD)/buffer.o

$(BUILD)/scheduler.o:
	$(CC) $(CFLAGS) -c kernel/scheduler/scheduler.c -o $(BUILD)/scheduler.o

$(BUILD)/syscall.o:
	$(CC) $(CFLAGS) -c kernel/syscall/syscall.c -o $(BUILD)/syscall.o

$(BUILD)/vfs.o:
	$(CC) $(CFLAGS) -c kernel/vfs/vfs.c -o $(BUILD)/vfs.o

$(BUILD)/init.o:
	$(CC) $(CFLAGS) -c kernel/init/init.c -o $(BUILD)/init.o

$(BUILD)/vga_driver.o:
	$(CC) $(CFLAGS) -c kernel/drivers/vga/vga.c -o $(BUILD)/vga_driver.o

$(BUILD)/keyboard.o:
	$(CC) $(CFLAGS) -c kernel/drivers/keyboard/keyboard.c -o $(BUILD)/keyboard.o

$(BUILD)/timer.o:
	$(CC) $(CFLAGS) -c kernel/drivers/timer/timer.c -o $(BUILD)/timer.o

$(BUILD)/pic.o:
	$(CC) $(CFLAGS) -c kernel/drivers/pic/pic.c -o $(BUILD)/pic.o
clean:
	rm -f $(BUILD)/*.o
