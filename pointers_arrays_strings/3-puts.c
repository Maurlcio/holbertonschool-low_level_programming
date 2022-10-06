#include "main.h"

/**
*_puts - prints a string, then newline
*@str: the string in question
*/

void _puts(char *str)
{
int string;

for (string = 0; str[string] != '\0'; string++)
{
putchar(str[string]);
}
putchar('\n');
}
