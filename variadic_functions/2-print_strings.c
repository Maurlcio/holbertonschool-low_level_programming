#include "variadic_functions.h"

/**
 * print_strings - prints a string, followed by a newline, many times
 * @separator: string to be printed between other strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);
		if (!str)
		{
			str = "(nil)";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && a == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(list);
}
