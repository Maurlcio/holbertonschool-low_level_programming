#include "main.h"

/**
*print_diagonal - ok i cant do this one without fucking up the comments
*@n: n
*/

void print_diagonal(int n)
{
int slash;
int space;

if (n > 0)
{
for (slash = 0; slash < n; slash++)
{
for (space = 0; space < slash; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
