#include "ports.h"

unsigned char inb(unsigned short port)
{
    (void)port;

    /* Dummy di Termux.
       Implementasi x86 akan dibuat di laptop. */
    return 0;
}

void outb(unsigned short port, unsigned char value)
{
    (void)port;
    (void)value;
}
