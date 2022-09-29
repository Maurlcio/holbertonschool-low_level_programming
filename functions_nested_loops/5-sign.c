#include "main.h"

/**
*print_sign - prints the sign of a number
*@n: seriously though it just fuckin disappears what
*Return: 1 if greater than 0, 0 if zero, -1 if none of the above
*/

int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n == '0')
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
