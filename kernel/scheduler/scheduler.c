#include <stdio.h>
#include "scheduler.h"

static task_t tasks[MAX_TASKS];
static int task_count = 0;
static int current_task = -1;

void scheduler_init(void)
{
    task_count = 0;
    current_task = -1;

    for (int i = 0; i < MAX_TASKS; i++)
    {
        tasks[i].pid = -1;
        tasks[i].active = 0;
        tasks[i].state = TASK_STOPPED;
    }
}

int scheduler_create_task(const char *name)
{
    if (task_count >= MAX_TASKS)
    {
        return -1;
    }

    tasks[task_count].pid = task_count;
    tasks[task_count].active = 1;
    tasks[task_count].state = TASK_READY;

    int i = 0;

    while (name[i] && i < 31)
    {
        tasks[task_count].name[i] = name[i];
        i++;
    }

    tasks[task_count].name[i] = '\0';

    task_count++;

    return task_count - 1;
}

void scheduler_next(void)
{
    if (task_count == 0)
    {
        return;
    }

    if (current_task >= 0)
    {
        tasks[current_task].state = TASK_READY;
    }

    current_task++;

    if (current_task >= task_count)
    {
        current_task = 0;
    }

    tasks[current_task].state = TASK_RUNNING;
}

void scheduler_list(void)
{
    printf("===== Task List =====\n");

    for (int i = 0; i < task_count; i++)
    {
        const char *state = "UNKNOWN";

        switch (tasks[i].state)
        {
            case TASK_READY:
                state = "READY";
                break;

            case TASK_RUNNING:
                state = "RUNNING";
                break;

            case TASK_WAITING:
                state = "WAITING";
                break;

            case TASK_STOPPED:
                state = "STOPPED";
                break;
        }

        printf("PID %d : %-10s [%s]\n",
               tasks[i].pid,
               tasks[i].name,
               state);
    }

    printf("\n");
}
