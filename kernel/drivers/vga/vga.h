#ifndef NOVA_VGA_H
#define NOVA_VGA_H

void vga_init(void);
void vga_clear(void);
void vga_putchar(char c);
void vga_write(const char *str);

#endif
