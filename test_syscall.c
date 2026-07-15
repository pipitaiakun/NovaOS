#include "kernel/syscall/syscall.h"

int main(void)
{
    syscall_init();

    syscall_execute(SYS_PRINT, "Halo dari Syscall!\n");
    syscall_execute(SYS_PRINT, "NovaOS Kernel API berjalan.\n");

    return 0;
}
