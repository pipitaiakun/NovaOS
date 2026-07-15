#include "panic.h"

void kernel_panic(const char *message)
{
    (void)message;

    while (1)
    {
    }
}
