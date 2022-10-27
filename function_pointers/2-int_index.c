#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -searches for an integer
 * @array: yup
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: int or -1 if error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (-1);
}

