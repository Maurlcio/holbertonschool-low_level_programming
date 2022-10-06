#include "main.h"
#include "2-strlen.c"

/**
*rev_string - reverses a string
*@s: char type pointer
*/

void rev_string(char *s)
{
int reverse;
char string;

for (reverse = 0; reverse < _strlen(s) / 2; reverse++)
{
string = s[reverse];
s[reverse] = s[_strlen(s) - reverse - 1];
s[_strlen(s) - reverse - 1] = string;
}
}
