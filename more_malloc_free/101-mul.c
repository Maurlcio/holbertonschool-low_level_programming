#include "main.h"

/**
*_isitdigit - because i cant use the actual command lol
*@s: yknow the deal
*Return: yadda yadda
*/

int _isitdigit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
*_strlen - same deal
*@s: like, the exact same
*Return: love me some numbers
*/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
*error - since im in the groove of doing these!
*/

void error(void)
{
printf("Error\n");
exit(98);
}

/**
*main - here we are! the big one
*@argc: arguement count
*@argv: arguement array
*Return: hopefully!
*/

int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !_isitdigit(s1) || !_isitdigit(s2))
error();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
a = 1;
if (a)
putchar(result[i] + '0');
}
free(result);
if (!a)
putchar('0');
putchar('\n');
return (0);
}