#include "main.h"

/**
*reverse_array - reverses the content of an array
*@a: first letter of the dumbphabet
*@n: number of elements to *hweep*
*/

void reverse_array(int *a, int n)
{
int rev;
int erse;

for (rev = 0; rev < n / 2; rev++)
{
erse = a[rev];
a[rev] = a[n - rev - 1];
a[n - rev - 1] = erse;
}
}
