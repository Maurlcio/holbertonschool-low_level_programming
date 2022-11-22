#include "lists.h"

/**
 * dlistint_len - same as last time but easier
 * @h: n o d e
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t retrn = 0;

	while (h)
	{
		h = h->next;
		retrn++;
	}
	return (retrn);
}
