#include "main.h"

/**
*rot13 - fucks up perfectly fine sentences
*@rot: string to fuck up completely
*Return: your very own rot-13 translator
*/

char *rot13(char *rot)
{
char rot13[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char rot132[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

int a;
int b = 0;

for (a = 0; rot[a] != '\0'; a++)
{
for (b = 0; rot13[b] != '\0'; b++)
{
if (rot[a] == rot13[b])
{
rot[a] = rot132[b];
break;
}
}
}
return (rot);
}
