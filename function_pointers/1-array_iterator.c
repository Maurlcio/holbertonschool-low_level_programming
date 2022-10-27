#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of the array
 * @array: pointer to the array
 * @size: of the array
 * @action: pointer to the function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
