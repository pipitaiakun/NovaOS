#include "vga.h"

void vga_init(void)
{
    /* Akan diisi saat implementasi VGA */
}

void vga_clear(void)
{
}

void vga_putchar(char c)
{
    (void)c;
}

void vga_write(const char *str)
{
    while (*str)
    {
        vga_putchar(*str);
        str++;
    }
}
