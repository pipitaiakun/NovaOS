#include <stdio.h>
#include "kernel/mm/memory.h"

int main(void)
{
    memory_init();

    unsigned long p1 = memory_alloc_page();
    unsigned long p2 = memory_alloc_page();
    unsigned long p3 = memory_alloc_page();

    printf("Page 1 : %lu\n", p1);
    printf("Page 2 : %lu\n", p2);
    printf("Page 3 : %lu\n", p3);

    memory_free_page(p2);

    unsigned long p4 = memory_alloc_page();

    printf("Page baru : %lu\n", p4);

    return 0;
}
