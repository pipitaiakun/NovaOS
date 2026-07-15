#ifndef NOVA_PORTS_H
#define NOVA_PORTS_H

unsigned char inb(unsigned short port);
void outb(unsigned short port, unsigned char value);

#endif
