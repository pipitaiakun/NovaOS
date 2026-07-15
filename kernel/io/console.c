#include <stdio.h>
#include "console.h"
#include "buffer.h"

void console_init(void)
{
    buffer_init();
}

void console_write(const char *text)
{
    buffer_write(text);
    printf("%s", text);
}
