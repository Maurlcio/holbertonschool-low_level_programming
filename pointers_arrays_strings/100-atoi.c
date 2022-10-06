#include "main.h"

/**
*_atoi - converts string to integer
*@s: the motherfucker that begun all this
*Return: yeah i doubt i'll be returning to this
*/

int _atoi(char *s)
{
int a;
int b, b2;

b = 0;
b2 = -1;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == '-')
b2 *= -1;

if (s[a] > 47 && s[a] < 58)
{
if (b < 0)
b = (b * 10) - (s[a] - '0');
else
b = (s[a] - '0') * -1;

if (s[a + 1] < 48 || s[a + 1] > 57)
break;
}
}
if (b2 < 0)
b *= -1;

return (b);
}
