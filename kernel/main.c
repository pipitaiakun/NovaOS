/*
 * NovaOS Kernel
 */
#include "config.h"
#include "kernel.h"

#include "init/init.h"

#include "mm/memory.h"
#include "video/video.h"

#include "core/log.h"
#include "core/panic.h"

#include "io/console.h"
#include "io/kprintf.h"

#include "scheduler/scheduler.h"

#include "syscall/syscall.h"

#include "vfs/vfs.h"

void kernel_main(void)
{
    memory_init();

    video_init();

    console_init();

    kprintf(NOVA_NAME " Booting...\n");
    kprintf("Version : " NOVA_VERSION "\n");

    scheduler_init();

    syscall_init();

    vfs_init();

    kprintf("Memory      : OK\n");
    kprintf("Console     : OK\n");
    kprintf("Scheduler   : OK\n");
    kprintf("Syscall     : OK\n");
    kprintf("VFS         : OK\n");

    kprintf("\nKernel Ready!\n");

    while (1)
    {
    }
}
