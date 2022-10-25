#include "main.h"

/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: bytes necessary
*Return: pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *wtvr;
unsigned int a, b, c, d;

if (s1 == NULL)
s1 = 0;

else if (s2 == NULL)
s2 = 0;

else
{
for (a = 0; s1[a] != '\0'; a++)
{
}
for (b = 0; s2[b] != '\0'; b++)
{
}
if (n > b)
{
n = b;
}
c = a + n;

wtvr = malloc(c + 1);

if (wtvr == NULL)
{
return (NULL);
}
for (d = 0; d < c; d++)
{
if (d < a)
wtvr[d] = s1[d];
else
wtvr[d] = s2[d - a];
}
wtvr[d] = '\0';
}
return (wtvr);
}
