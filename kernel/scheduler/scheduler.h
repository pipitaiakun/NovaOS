#ifndef NOVA_SCHEDULER_H
#define NOVA_SCHEDULER_H

#define MAX_TASKS 32

typedef enum
{
    TASK_READY,
    TASK_RUNNING,
    TASK_WAITING,
    TASK_STOPPED
} task_state_t;

typedef struct
{
    int pid;
    int active;
    task_state_t state;
    char name[32];
} task_t;

void scheduler_init(void);
int scheduler_create_task(const char *name);
void scheduler_next(void);
void scheduler_list(void);

#endif
