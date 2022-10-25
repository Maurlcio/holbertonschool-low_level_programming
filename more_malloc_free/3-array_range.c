#include "main.h"

/**
*array_range - creates an array of integers
*@min: minimum
*@max: maximum
*Return: what'd ya think?
*/

int *array_range(int min, int max)
{
int *a, b;

if (min > max)
return (NULL);

b = max - min + 1;
a = malloc(sizeof(*a) * n);
if (!a)
return (NULL);
while (b--)
a[b] = max--;
return (a);
}}
