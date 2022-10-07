#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@up: all the characters to make uppercase
*Return: UPPERCASE
*/

char *string_toupper(char *up)
{
int per;

for (per = 0; up[per] != '\0'; per++)
{
if (up[per] >= 'a' && up[per] <= 'z')
{
up[per] = up[per] - 32;
}
}
return (up);
}
