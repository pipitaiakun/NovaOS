#include <stdio.h>
#include "kernel/io/console.h"
#include "kernel/io/buffer.h"

int main(void)
{
    console_init();

    console_write("Halo NovaOS!\n");
    console_write("Console Buffer Aktif\n");

    printf("\n===== Isi Buffer =====\n");
    printf("%s", buffer_get());

    return 0;
}
