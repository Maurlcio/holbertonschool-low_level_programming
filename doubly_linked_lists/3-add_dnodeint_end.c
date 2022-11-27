#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: self-explanatory
 * @n: data
 * Return: address to the new node, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *theNew = malloc(sizeof(dlistint_t));
	dlistint_t *aux;

	if (!theNew)
		return (NULL);

	theNew->n = n;
	theNew->next = NULL;

	if (!*head)
	{
		theNew->prev = NULL;
		*head = theNew;
		return (theNew);
	}

	aux = *head;

	while (aux->next != NULL)
		aux = aux->next;

	aux->next = theNew;
	theNew->prev = aux;

	return (theNew);
}
