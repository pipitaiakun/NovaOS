#ifndef NOVA_BITMAP_H
#define NOVA_BITMAP_H

void bitmap_init(void);
void bitmap_set(unsigned long bit);
void bitmap_clear(unsigned long bit);
int bitmap_test(unsigned long bit);
long bitmap_find_free(void);

#endif
