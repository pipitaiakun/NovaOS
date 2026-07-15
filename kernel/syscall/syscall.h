#ifndef NOVA_SYSCALL_H
#define NOVA_SYSCALL_H

#define SYS_PRINT 1

void syscall_init(void);
int syscall_execute(int number, const char *arg);

#endif
