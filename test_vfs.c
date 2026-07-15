#include "kernel/vfs/vfs.h"

int main(void)
{
    vfs_init();

    vfs_create("kernel.bin");
    vfs_create("shell.app");
    vfs_create("readme.txt");

    vfs_list();

    return 0;
}
