#ifndef NOVA_HEAP_H
#define NOVA_HEAP_H

void heap_init(void);

void *kmalloc(unsigned long size);
void kfree(void *ptr);

#endif
