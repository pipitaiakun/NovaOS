#ifndef NOVA_MEMORY_H
#define NOVA_MEMORY_H

void memory_init(void);

unsigned long memory_alloc_page(void);
void memory_free_page(unsigned long page);

#endif
