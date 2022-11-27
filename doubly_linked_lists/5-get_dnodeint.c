#include "lists.h"

/**
 * get_dnodeint_at_index - returns a specific node from a list
 * @head: node
 * @index: of the node, starting from 0
 * Return: pointer to the node, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (!head)
		return (NULL);

	while (a < index && head != NULL)
	{
		head = head->next;
		a++;
	}
	return (head);
}
