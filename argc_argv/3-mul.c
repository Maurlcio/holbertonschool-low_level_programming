#include "main.h"

/**
*main - multiplies two numbers
*@argc: argument count
*@argv: arguement vector
*Return: 1 if erorr, 0 if good
*/

int main(int argc, char **argv)
{
int num1;
int num2;
int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
 result = (num1 *num2);

printf("%d\n", result);
return (0);
}
}
