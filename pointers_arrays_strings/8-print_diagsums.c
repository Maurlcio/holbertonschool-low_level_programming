#include "main.h"

/**
*print_diagsums - never realized diagonals were this deep
*@a: a
*@size: huge
*/

void print_diagsums(int *a, int size)
{
int c, b1 = 0, b2 = 0;

for (c = 0; c < size; c++)
{
b1 += *(a + size * c + c);
b2 += *(a + size * (c + 1) - c - 1);
}
printf("%d, %d\n", b1, b2);
}
