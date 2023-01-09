#ifndef SORT_H
#define SORT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <stdbool.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

#endif
