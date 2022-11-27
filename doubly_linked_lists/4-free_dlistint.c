#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: I just need, that little, [[F R E E]], you have
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
