#include "main.h"

/**
*malloc_checked - does what malloc literally does
*@b: bytes
*Return: hopefully not the exit!
*/

void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(sizeof(int) + b - 4);
if (p == NULL)
{
exit(98);
}
return (p);
}
