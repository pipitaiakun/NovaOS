#ifndef NOVA_VFS_H
#define NOVA_VFS_H

#define MAX_FILES 32

typedef struct
{
    char name[32];
    int used;
} vfs_node_t;

void vfs_init(void);
int vfs_create(const char *name);
void vfs_list(void);

#endif
