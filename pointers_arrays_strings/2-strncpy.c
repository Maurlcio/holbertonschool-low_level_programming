#include "main.h"

/**
*_strncpy - copies a string
*@dest: final destination (not really)
*@src: all-encompassing source (not really)
*@n: n (not really) (just kidding)
*Return: "it conformed to the reflection"
*/

char *_strncpy(char *dest, char *src, int n)
{
int ae;

for (ae = 0; ae < n && src[ae] != '\0'; ae++)
{
dest[ae] = src[ae];
}
for ( ; ae < n; ae++)
{
dest[ae] = '\0';
}
return (dest);
}
