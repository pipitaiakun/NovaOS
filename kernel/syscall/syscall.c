#include "syscall.h"
#include "../io/kprintf.h"

void syscall_init(void)
{
}

int syscall_execute(int number, const char *arg)
{
    switch (number)
    {
        case SYS_PRINT:
            kprintf(arg);
            return 0;

        default:
            return -1;
    }
}
