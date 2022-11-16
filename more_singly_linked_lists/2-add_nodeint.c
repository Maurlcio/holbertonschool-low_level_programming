#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a list
 * @head: node
 * @n: data within the node
 * Return: address of the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *theNew = malloc(sizeof(listint_t));

	theNew->n = n;
	theNew->next = *head;

	*head = theNew;

	if (!theNew)
		return (NULL);

	return (theNew);
}
