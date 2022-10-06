#include "main.h"

/**
*print_array - prints n elements of an array of integers
*@a: pointer
*@n: integer
*/

void print_array(int *a, int n)
{
int howmany;

for (howmany = 0; howmany < n; howmany++)
{
printf("%d", a[howmany]);
if (howmany != n - 1)
{
printf(", ");
}
}
putchar('\n');
}
