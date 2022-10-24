#include "main.h"

/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: pointer with the allocated memory space
*/

char *str_concat(char *s1, char *s2)
{
unsigned int a, b, c, d;
char *str;

if (s1 == NULL)
a = "";
else
{
for (a = 0; s1[a]; a++)
{
}
if (s2 == NULL)
b = "";
else
{
for (b = 0; s2[b]; b++)
{
}
}
c = a + b + 1;
str = malloc(c *sizeof(char));
if (s == NULL)
return (NULL);
else
{
for (d = 0; d < a; d++)
str[d] = s1[d];
for (d = 0; d < b; d++)
{
str[a + d] = s2[d];
str[a + d] = '\0';
}
return (str);
}
