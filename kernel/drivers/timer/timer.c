#include "timer.h"

static unsigned long ticks = 0;

void timer_init(void)
{
    ticks = 0;
}

unsigned long timer_ticks(void)
{
    return ticks;
}
