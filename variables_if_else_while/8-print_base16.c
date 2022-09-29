#include <stdio.h>

/**
*main - base16 fun for the whole family
*Return: clearly
*/

int main(void)
{
char ch;
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
