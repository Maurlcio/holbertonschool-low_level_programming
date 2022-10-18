#include "main.h"

/**
*main - mr krabs lookin ass
*@argc: argument counter
*@argv: argument vector
*Return: 0101010100010101010010010010101 just kidding idk what this says lol
*/

int main(int argc, char *argv[])
{
int a, i, t, n = 0;
int c[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
if (a <= 0)
{
puts("0");
return (1);
}
else
{
for (i = 0; i < 5; i++)
{
t = a / c[i];
a -= t *c[i];
n += t;
if (a == 0)
break;
}
}
printf("%d\n", n);
return (0);
}
