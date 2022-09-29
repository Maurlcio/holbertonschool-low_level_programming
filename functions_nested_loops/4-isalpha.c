#include "main.h"

/**
*_isalpha - checks if a character is a letter, essentially
*@c: why does it disappear with the at
*Return: just like last time.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}


