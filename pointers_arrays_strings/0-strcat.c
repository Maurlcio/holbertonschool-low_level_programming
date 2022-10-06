#include "main.h"
/**
*_strcat - e n l a r g e
* @dest: concatinated destination
* @src: concatenated source
*Return: they always do.
*/

char *_strcat(char *dest, char *src)
{
int arr1;
int arr2;

for (arr2 = 0; dest[arr2] != '\0'; arr2++)
{}
for (arr1 = 0; src[arr1] != '\0'; arr1++)
{
dest[arr2 + arr1] = src[arr1];
}
dest[arr2 + arr1] = '\0';
return (dest);
}
