#include <stdio.h>

/**
*main - prints alphabet in reverse
*Return: yas
*/

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
