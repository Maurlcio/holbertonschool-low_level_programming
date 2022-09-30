#include "main.h"

/**
*main - fizz, buzz, fizz buzz fizz buzz
*Return: zer0
*/

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
}
else if (num != 100)
{
printf(" ");
}
else
{
print("%d", num);
}
printf("\n");
return (0);
}
