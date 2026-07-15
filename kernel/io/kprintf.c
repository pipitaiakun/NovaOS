#include "kprintf.h"
#include "console.h"

void kprintf(const char *text)
{
    console_write(text);
}
