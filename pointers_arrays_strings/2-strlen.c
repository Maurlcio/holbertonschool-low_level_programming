#include "main.h"

/**
*_strlen - returns the length of a string, like the actual command
*@s: char type variable
*Return: length of the string
*/

int _strlen(char *s)
{
int length;

while (length = 0 || s[length] != '\0')
{
length++;
}
return (length);
}
