/*
 * NovaOS
 * kernel/main.c
 */

#include "kernel.h"
#include "mm/memory.h"
#include "video/video.h"

void kernel_main(void)
{
    memory_init();
    video_init();

    while (1)
    {
    }
}
