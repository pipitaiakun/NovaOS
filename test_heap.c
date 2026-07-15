#include <stdio.h>
#include "kernel/mm/heap.h"

int main(void)
{
    heap_init();

    void *p1 = kmalloc(64);
    void *p2 = kmalloc(128);
    void *p3 = kmalloc(256);

    printf("Pointer 1 : %p\n", p1);
    printf("Pointer 2 : %p\n", p2);
    printf("Pointer 3 : %p\n", p3);

    return 0;
}
