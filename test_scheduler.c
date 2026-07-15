#include "kernel/scheduler/scheduler.h"

int main(void)
{
    scheduler_init();

    scheduler_create_task("Kernel");
    scheduler_create_task("Shell");
    scheduler_create_task("Console");

    scheduler_next();
    scheduler_list();

    scheduler_next();
    scheduler_list();

    scheduler_next();
    scheduler_list();

    return 0;
}
