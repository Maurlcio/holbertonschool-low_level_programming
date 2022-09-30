#include "main.h"



void times_table(void)
{
int num1;
int num2;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
int prod = num1 * num2;

if (num2 == 0)
_putchar('0');
else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
}
_putchar('\n');
}
}
