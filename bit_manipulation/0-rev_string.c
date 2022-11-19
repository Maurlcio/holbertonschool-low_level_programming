#include "main.h"

/**
*rev_string - reverses a string
*@s: char type pointer
*/

void rev_string(char *s)
{
int reverse;
char string;

for (reverse = 0; reverse < _trlen(s) / 2; reverse++)
{
string = s[reverse];
s[reverse] = s[strlen(s) - reverse - 1];
s[strlen(s) - reverse - 1] = string;
}
}
