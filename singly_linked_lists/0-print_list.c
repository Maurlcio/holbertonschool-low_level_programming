#include "lists.h"

/**
 *print_list - prints all the elements of a rather specific list
 *@h: pointer to the list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t retrn;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		retrn++;
	}
	return (retrn);
}
