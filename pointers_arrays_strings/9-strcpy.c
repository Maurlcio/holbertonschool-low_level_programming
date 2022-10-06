#include "main.h"
#include "2-strlen.c"

/**
*_strcpy - copies a string
*@dest: destination
*@src: pretty self-explanatory
Return: YEAHHHH
*/

char *_strcpy(char *dest, char *src)
{
int times;

for (times = 0; times <= _strlen(src); times++)
{
dest[times] = src[times];
}
return (dest);
}
