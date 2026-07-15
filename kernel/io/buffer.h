#ifndef NOVA_BUFFER_H
#define NOVA_BUFFER_H

void buffer_init(void);
void buffer_write(const char *text);
const char *buffer_get(void);

#endif
