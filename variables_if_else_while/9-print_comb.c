#include <stdio.h>

/**
*main - prints all the combos. ALL OF THEM
*Return: maybe
*/

int main(void)
{
int num;

for (num = '0'; num <= '8'; num++)
{
putchar(num);
putchar(',');
putchar(' ');
}
for (num = '9'; num <= '9'; num++)
{
putchar(num);
}
return (0);
}
