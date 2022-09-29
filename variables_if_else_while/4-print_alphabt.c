#include <stdio.h>

/**
*main - shows alphabet in lc but NOT q and e.
*Return: yes.
*/

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
