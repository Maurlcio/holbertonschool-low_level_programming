#include "main.h"

/**
*_strcmp - compares two strings
*@s1: string 1
*@s2: string 2
*Return: i am very int-elligent
*/

int _strcmp(char *s1, char *s2)
{
if (strlen(s1) == strlen(s2))
return (0);
else if (strlen(s1) < strlen(s2))
return (strlen(s1) + strlen(s2));
else
return (strlen(s1) - strlen(s2));
}
