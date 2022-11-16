#include "lists.h"

/**
 * free_listint2 - frees a list but also sets head to nil
 * @head: So tall we'll see past the dark! Stare right into...
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head)
	{
		aux = (*head)->next;

		free(*head);

		*head = aux;
	}
	*head = NULL;
}
