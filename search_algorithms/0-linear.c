#include "search_algos.h"

/**
 * linear_search - simple search algorithm that compares a desired value with
 * elements of an array until it finds a match
 *
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: value to compare and locate
 *
 * Return: returns index of array where value matched on success. -1 on edge case
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (!array)
		return (-1);

	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
		a++;
	}
	return (-1);
}
