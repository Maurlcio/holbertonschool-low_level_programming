#include <stdio.h>

/**
*main - shows alphabet in lc, then newline.
*Return: yes.
*/

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
