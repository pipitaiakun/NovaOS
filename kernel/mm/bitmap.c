#include "bitmap.h"

#define BITMAP_SIZE 128

static unsigned char bitmap[BITMAP_SIZE];

void bitmap_init(void)
{
    for (unsigned long i = 0; i < BITMAP_SIZE; i++)
    {
        bitmap[i] = 0;
    }
}

void bitmap_set(unsigned long bit)
{
    bitmap[bit / 8] |= (1 << (bit % 8));
}

void bitmap_clear(unsigned long bit)
{
    bitmap[bit / 8] &= ~(1 << (bit % 8));
}

int bitmap_test(unsigned long bit)
{
    return (bitmap[bit / 8] & (1 << (bit % 8))) != 0;
}

long bitmap_find_free(void)
{
    for (unsigned long bit = 0; bit < BITMAP_SIZE * 8; bit++)
    {
        if (!bitmap_test(bit))
        {
            return (long)bit;
        }
    }

    return -1;
}
