#include "main.h"

/**
*rev_string - reverses a string
*@s: pointer of type char
*/

void rev_string(char *s)
{
char reverse;
char string;

for (reverse = 0; reverse < strlen(s) / 2; reverse++)
{
string = s[reverse];
s[reverse] = s[strlen(s) - reverse - 1];
s[strlen(s) - reverse - 1] = string;
}
}
