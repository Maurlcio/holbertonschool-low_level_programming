#include "main.h"

/**
*malloc_checked - does what malloc literally does
*@b: bytes
*Return: hopefully not the exit!
*/

void *malloc_checked(unsigned int b)
{
  int *vessel;

vessel = malloc(b);
if (vessel == NULL)
{
exit(98);
}
return (vessel);
}
