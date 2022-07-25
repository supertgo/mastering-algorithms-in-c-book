#ifndef QKSORT_H
#define QKSORT_H
#include <stdlib.h>

int qksort(void *data, int size, int esize, int i, int k, int (*compare)
(const void *key1, const void *key2));

#endif