#include "memory.h"
#include "bitmap.h"

void memory_init(void)
{
    bitmap_init();
}

unsigned long memory_alloc_page(void)
{
    long page = bitmap_find_free();

    if (page >= 0)
    {
        bitmap_set((unsigned long)page);
        return (unsigned long)page;
    }

    return (unsigned long)-1;
}

void memory_free_page(unsigned long page)
{
    bitmap_clear(page);
}
