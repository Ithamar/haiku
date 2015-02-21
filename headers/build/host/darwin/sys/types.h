#include_next <sys/types.h>

typedef unsigned int clockid_t;

#define CLOCK_REALTIME		0
#define TIMER_ABSTIME		1
#define CLOCK_MONOTONIC		2

typedef unsigned long ulong;
