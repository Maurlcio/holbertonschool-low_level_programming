#include "main.h"

/**
*wildcmp - is as wild as they say
*@s1: pointer char 1
*@s2: pointer char 2
*Return: 1 0 which one will it be?
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
{
return (0);
}
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
}
