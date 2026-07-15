#include "init.h"

#include "../hal/hal.h"
#include "../mm/memory.h"
#include "../video/video.h"
#include "../io/console.h"
#include "../scheduler/scheduler.h"
#include "../syscall/syscall.h"
#include "../vfs/vfs.h"

#include "../drivers/vga/vga.h"
#include "../drivers/keyboard/keyboard.h"
#include "../drivers/timer/timer.h"
#include "../drivers/pic/pic.h"

void kernel_init(void)
{
    hal_init();

    memory_init();

    video_init();

    vga_init();

    console_init();

    pic_init();

    timer_init();

    keyboard_init();

    scheduler_init();

    syscall_init();

    vfs_init();
}
