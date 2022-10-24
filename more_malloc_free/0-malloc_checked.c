#include "main.h"

/**
*malloc_checked - does what malloc literally does
*@b: bytes
*Return: hopefully not the exit!
*/

void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
