#include "video.h"

void video_init(void)
{
}

void video_clear(void)
{
}

void video_putchar(char c)
{
    (void)c;
}

void video_write(const char *str)
{
    while (*str)
    {
        video_putchar(*str);
        str++;
    }
}
