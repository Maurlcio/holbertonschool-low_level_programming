#include "search_algos.h"

/**
 * recursive_search - the actual legwork function for the binary search algo
 * the code is weird because i wanted to try out some var type conversion
 * stuff that i learned before moving on from C completely
 * 
 * @array: array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the data
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - function that calls a binary search algorithm
 *
 * @array: pointer to the array
 * @size: size of the array to be searched
 * @value: value to compare for
 *
 * Return: index where the data that matches value is located
 * or -1 in edge case.
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
