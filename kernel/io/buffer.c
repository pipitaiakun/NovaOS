#include "buffer.h"

#define BUFFER_SIZE 4096

static char buffer[BUFFER_SIZE];
static unsigned long index = 0;

void buffer_init(void)
{
    index = 0;
    buffer[0] = '\0';
}

void buffer_write(const char *text)
{
    while (*text && index < BUFFER_SIZE - 1)
    {
        buffer[index++] = *text++;
    }

    buffer[index] = '\0';
}

const char *buffer_get(void)
{
    return buffer;
}
