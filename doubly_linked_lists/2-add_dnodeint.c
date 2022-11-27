#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning
 * @head: node
 * @n: data
 * Return: address to the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *theNew = malloc(sizeof(dlistint_t));

	if (!theNew)
		return (NULL);

	theNew->n = n;
	theNew->next = *head;
	theNew->prev = NULL;

	if (*head)
	      (*head)->prev = theNew;

	*head = theNew;

	return (theNew);
}
