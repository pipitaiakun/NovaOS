CC = clang

CFLAGS = -ffreestanding -Wall -Wextra -Ikernel -c

BUILD = build

all: \
	$(BUILD)/main.o \
	$(BUILD)/cpu.o \
	$(BUILD)/memory.o \
	$(BUILD)/video.o \
	$(BUILD)/string.o

$(BUILD)/main.o: kernel/main.c
	$(CC) $(CFLAGS) kernel/main.c -o $(BUILD)/main.o

$(BUILD)/cpu.o: kernel/arch/x86_64/cpu.c
	$(CC) $(CFLAGS) kernel/arch/x86_64/cpu.c -o $(BUILD)/cpu.o

$(BUILD)/memory.o: kernel/mm/memory.c
	$(CC) $(CFLAGS) kernel/mm/memory.c -o $(BUILD)/memory.o

$(BUILD)/video.o: kernel/video/video.c
	$(CC) $(CFLAGS) kernel/video/video.c -o $(BUILD)/video.o

$(BUILD)/string.o: kernel/lib/string.c
	$(CC) $(CFLAGS) kernel/lib/string.c -o $(BUILD)/string.o

clean:
	rm -f $(BUILD)/*.o
