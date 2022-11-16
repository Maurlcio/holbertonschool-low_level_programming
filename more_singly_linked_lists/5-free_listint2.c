#include "lists.h"

/**
 * free_listint2 - frees a list but also sets head to nil
 * @head: So tall we'll see past the dark! Stare right into...
 */

void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (*head == NULL)
		printf("Freed !");

	while (aux != NULL)
	{
		listint_t *aux2 = aux;

		aux = aux->next;

		free(aux2);
	}
	*head = NULL;
}
