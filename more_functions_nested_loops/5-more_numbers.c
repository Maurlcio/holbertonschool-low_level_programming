#include "main.h"

/**
*more_numbers - all of them. multiple times.
*/

void more_numbers(void)
{
int times;
int num;

for (times = '0'; times <= '9'; times++)
{
for (num = 0; num <= 9; num++)
{
if (num > 9)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
