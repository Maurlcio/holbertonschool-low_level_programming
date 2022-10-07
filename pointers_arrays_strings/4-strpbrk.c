#include "main.h"

/**
*_strpbrk - professional detective (again)
*@s: string
*@accept: Y/N
*Return: returns a char- https://www.youtube.com/watch?v=wyYgB0yolEI
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (strchr(accept, *s))
{
return (s);
}
s++;
}
return (NULL);
}
