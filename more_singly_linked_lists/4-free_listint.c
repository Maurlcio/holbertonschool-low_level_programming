#include "lists.h"

/**
 * free_listint - frees a list (in terms of memory)
 * @head: It's still dark... so dark!
 */

void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (aux != NULL)
	{
		listint_t *aux2 = aux;

		aux = aux->next;

		free(aux2);
	}
}
