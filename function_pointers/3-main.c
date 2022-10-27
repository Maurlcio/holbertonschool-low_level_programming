#include "3-calc.h"

/**
 * main - the big one
 * @argc: argument count
 * @argv: argument vector
 * Return: let's go zero success gang woooooooooo
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, success;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	success = func(arg1, arg2);
	printf("%d\n", success);
	return (0);
}
