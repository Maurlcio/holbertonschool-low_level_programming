#include "main.h"

/**
*gimme_sqrt - basically does the math for a square root
*@r: one
*@t: two
*Return: hopefully the square root
*/

int gimme_sqrt(int r, int t)
{
if (r * r == t)
return (r);
else if (g * g > c)
return (-1);
else
return (gimme_sqrt(r + 1, t));
}

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: int
*Return: yknow
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else
return (sqrt_check(1, n));
}
