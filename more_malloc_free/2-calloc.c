#include "main.h"

/**
*_calloc - allocates memory for an array
*@nmemb: memory
*@size: size
*Return: the address (not yours) ((yet))
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;

if (!nmemb || !size)
return (NULL);
a = malloc(nmemb * size);
if (!a)
return (NULL);
nmemb *= size;
while (nmemb--)
a[nmemb] = 0;
return (a);
}
