#include "main.h"

/**
*gimme_prime - checks if a number is prime or not
*@is: 1
*@p: 2
*Return: result! and 1 if prime 0 if not
*/

int gimme_prime(int is, int p)
{
if (p < 2 || p % is == 0)
return (0);
else if (is > p / 2)
return (1);
else
return (gimme_prime(is + 1, p));
}



/**
*is_prime_number - is it?
*@n: is it????
*Return: its not binary dont worry
*/

int is_prime_number(int n)
{
if (n == 2)
return (1);
else
return (gimme_prime(2, n));
}
