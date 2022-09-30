#include "main.h"

/**
*more_numbers - all of them. multiple times.
*/

void more_numbers(void)
{
int times;
int num1;
int num2;

for (times = '0'; times <= '9'; times++)
{
for (num1 = '0'; num1 <= '9'; num1++)
{
_putchar(num1);
}
for (num2 = 10; num2 <= 14; num2++)
{
_putchar((num2 + '0'));
}
_putchar('\n');
}
}
