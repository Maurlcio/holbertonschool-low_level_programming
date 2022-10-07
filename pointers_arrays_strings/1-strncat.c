#include "main.h"

/**
*_strncat - concatenates two strings but weird as hell
*@dest: dest char
*@src: src char
*@n: n int
*Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
int sent1;
int sent2;

for (sent2 = 0; dest[sent2] != '\0'; sent2++)
{
}
for (sent1 = 0; sent1 < n && src[sent1] != '\0'; sent1++)
{
dest[sent2 + sent1] = src[sent1];
}
dest[sent2 + sent1] = '\0';
return (dest);
}
