#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head node of list
 * Return: i mean, should be obvious
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
