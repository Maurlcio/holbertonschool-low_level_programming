#include "main.h"

/**
*_strchr - professional detective headass
*@s: pointer char
*@c: the less cool char
*Return: Partner ~ The Game is Afoot!
*/


char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
return (!c ? s : NULL);
}
