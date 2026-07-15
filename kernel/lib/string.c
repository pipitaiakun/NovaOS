#include "string.h"

void *memcpy(void *dest, const void *src, unsigned long n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    while (n--)
    {
        *d++ = *s++;
    }

    return dest;
}

void *memset(void *dest, int value, unsigned long n)
{
    unsigned char *d = dest;

    while (n--)
    {
        *d++ = (unsigned char)value;
    }

    return dest;
}
