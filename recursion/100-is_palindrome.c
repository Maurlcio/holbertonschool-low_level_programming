#include "main.h"

/**
*_howlongstr - checks length of string
*@str: string
*Return: length of the string
*/

int _howlongstr(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _howlongstr(str + 1));
}

/**
*check_palindrome - checks to see if a string is a palindrome
*@l: one
*@r: two
*@p: three
*Return: 1 if palindrome and 0 if you can fuck off
*/

int check_palindrome(int l, int r, char *p)
{
if (l >= r)
return (1);
else if (p[l] != p[r])
return (0);
else
return (check_palindrome(l + 1, r - 1, p));
}

/**
*is_palindrome - states if a string is a palindrome
*@s: string to check
*Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
