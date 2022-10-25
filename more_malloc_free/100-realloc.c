#include "main.h"

/**
*_realloc - reallocates a memory block
*@ptr: to the other allocated block
*@old_size: the old byte size
*@new_size: i mean. yeah
*Return: pointer!
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;

if (!ptr)
return (malloc(new_size));
if (!new_size)
return (free(ptr), NULL);
if (new_size == old_size)
return (ptr);

a = malloc(new_size);
if (!a)
return (NULL);

old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
a[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (a);
}
