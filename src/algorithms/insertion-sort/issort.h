#ifndef ISSORT_H
#define ISSORT_H
#include <stdlib.h>

int issort(void *data, int size, int esize, int (*compare)(const void *key1,
const void *key2));

#endif