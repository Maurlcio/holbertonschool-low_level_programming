#include "main.h"

/**
*print_rev - prints a string, in reverse
*@s: the char type variable
*/

void print_rev(char *s)
{
int stringrev;

for (stringrev = strlen(s) - 1; stringrev >= 0; stringrev--)
{
putchar(s[stringrev]);
}
putchar('\n');
}
