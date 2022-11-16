#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: given head node
 * @n: data within the node
 * Return: address to the node, or NULL if kaboom
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *theNew = malloc(sizeof(listint_t));
	listint_t *aux;

	if (!theNew)
		return (NULL);

	theNew->n = n;
	theNew->next = NULL;

	aux = *head;

	if (aux == NULL)
		*head = theNew;

	else
	{
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = theNew;
	}

	return (*head);
}

