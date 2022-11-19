#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: node
 * Return: head node's data, or 0 if node empty
 */

int pop_listint(listint_t **head)
{
	listint_t *Refraction;
	listint_t *aux;
	int retrn;

	if (*head == NULL)
		return (0);

	Refraction = *head;

	retrn = Refraction->n;
	aux = Refraction->next;

	free(Refraction);

	*head = aux;

	return (retrn);
}
