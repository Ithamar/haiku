#ifndef HAIKU_STDLIB_DARWIN_H
#define HAIKU_STDLIB_DARWIN_H

#include_next <stdlib.h>

static inline int atfork(void (*func)(void)) { return -1; }

#endif
