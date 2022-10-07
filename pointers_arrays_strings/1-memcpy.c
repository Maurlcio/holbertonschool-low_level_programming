#include "main.h"

/**
*_memcpy - same as the last but illegal
*@dest: destination
*@src: source
*@n: the lame non pointer
*Return: legal, clean, mild annoyance
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n--)
{
*(dest + n) = *(src + n);
}
return (dest);
}
