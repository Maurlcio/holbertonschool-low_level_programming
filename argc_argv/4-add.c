#include "main.h"

/**
*main - adds numbers
*@argc: argument count
*@argv: argument vector
*Return: 1 if ur stupid, 0 if true
*/

int main(int argc, char *argv[])
{
int a, b, c = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (isdigit(argv[a][b]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (a = 1; a < argc; a++)
{
c += atoi(argv[a]);
}
printf("%d\n", c);
return (0);
}
