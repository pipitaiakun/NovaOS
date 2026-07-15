#include <stdio.h>
#include "vfs.h"

static vfs_node_t files[MAX_FILES];

void vfs_init(void)
{
    for (int i = 0; i < MAX_FILES; i++)
    {
        files[i].used = 0;
    }
}

int vfs_create(const char *name)
{
    for (int i = 0; i < MAX_FILES; i++)
    {
        if (!files[i].used)
        {
            files[i].used = 1;

            int j = 0;
            while (name[j] && j < 31)
            {
                files[i].name[j] = name[j];
                j++;
            }

            files[i].name[j] = '\0';

            return i;
        }
    }

    return -1;
}

void vfs_list(void)
{
    printf("===== VFS =====\n");

    for (int i = 0; i < MAX_FILES; i++)
    {
        if (files[i].used)
        {
            printf("%d : %s\n", i, files[i].name);
        }
    }
}
