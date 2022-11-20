#include "main.h"

/**
 * flip_bits - flippity flip
 * @n: and a one!
 * @m: and a two!
 * Return: and a one! and a two! and a one, two, three, four, ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
