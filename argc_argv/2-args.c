#include "main.h"

/**
*main - prints all arguements
*@argc: argument count
*@argv: arguement vector
*Return: zero
*/

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
