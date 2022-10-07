#include "main.h"

/**
*_strstr - substrings within substrings
*@haystack: HEY....... stack
*@needle: leedle leedle 
*Return: hopefully not NULL!
*/

char *_strstr(char *haystack, char *needle)
{
int a;

while (*haystack)
{
for (a = 0; *(needle + a); a++)
{
if (*(needle + a) != *(haystack + a))
{
break;
}
}
if (!*(needle + a))
{
return (haystack);
}
haystack++;
}
return (NULL);
}
