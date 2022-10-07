#include "main.h"

/**
*leet - outstanding manouver
*@str: string
*Return: mozart needs a comeback tbh
*/

char *leet(char *str)
{
char theforbidden[] = "a4A4e3E3o0O0t7T7l1L1";
int very;
int ok;

for (very = 0; str[very] != '\0'; very++)
{
for (ok = 0; theforbidden[ok] != '\0'; ok++)
{
if (str[very] == theforbidden[ok])
{
str[very] = theforbidden[ok + 1];
break;
}
}
}
return (str);
}
