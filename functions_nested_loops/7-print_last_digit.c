#include "main.h"

/**
*print_last_digit - pretty self-explanatory actually
*@n: there it goes...
*Return: never gives up.
*/

int print_last_digit(int n)
{
_putchar('0' + _abs(n % 10));
return (_abs(n % 10));
}
