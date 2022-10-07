#include "main.h"

/**
*_strspn - gets the length of a prefix substring. cool
*@s: pointer char
*@accept: Y/N
*Return: prefix rights
*/

unsigned int _strspn(char *s, char *accept)
{
int a = 0;

while (*s && strchr(accept, *s))
{
s++;
a++;
}
return (a);
}
