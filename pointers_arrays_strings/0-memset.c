#include "main.h"

/**
*_memset - is constantly SUPER ANNOYING to this buffer in particular
*@s: pointer char 1
*@b: char 2
*@n: unsigned int
*Return: annoyance. perfection.
*/

char *_memset(char *s, char b, unsigned int n)
{
while (n--)
{
*(s + n) = b;
}
return (s);
}
