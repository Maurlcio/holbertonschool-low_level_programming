#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - prints a name
 *@name: the name
 *@f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
