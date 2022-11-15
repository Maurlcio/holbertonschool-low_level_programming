#include "lists.h"

/**
 * free_list - frees a list (in terms of memory)
 * @head: list sought be-with freedom by which to peer above, beyond the dark
 */

void free_list(list_t *head)
{
	list_t *aux = head;

	while (aux != NULL)
	{
		list_t *aux2 = aux;
		aux = aux->next;
		free(aux2->str);
		free(aux2);
	}
}
