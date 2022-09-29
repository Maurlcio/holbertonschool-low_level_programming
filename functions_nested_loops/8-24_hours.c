#include "main.h"

/**
*jack_bauer - 24 hours ain't feel like much, until it don't feel like 24 hours
*/

void jack_bauer(void)
{
int h1;
int h2;
int min1;
int min2;

for (h1 = '0'; h <= '2'; h1++)
{
for (h2 = '0'; h2 <= '3'; h2++)
{
for (min1 = '0'; min1 <= '5'; min1++)
{
for (min2 = '0'; min2 <= '9'; min2++)
{
_putchar(min2);
_putchar('\n');
}
_putchar(min1);
_putchar('\n');
}
_putchar(h2);
_putchar('\n');
}
_putchar(h1);
_putchar('\n');
}
}
