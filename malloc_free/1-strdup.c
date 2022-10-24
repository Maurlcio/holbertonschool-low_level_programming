#include "main.h"

/**
*_strdup - duplicates a string essentially
*@str: the string
*Return: pointer
*/

char *_strdup(char *str)
{
int a;
int b;
char *cpy;

if (str == NULL)
{
return (NULL);
}
for (a = 0; str[a]; a++)
{
;
}
a++;
cpy = malloc(a *sizeof(char));
if (cpy == NULL)
{
return (NULL);
}
for (b = 0; b < a; b++)
{
cpy[b] = str[b];
}
return (cpy);
}
