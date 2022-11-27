#include "lists.h"

/**
 * sum_dlistint - adds up all the data of a list
 * @head: head
 * Return: the sum!
 */

int sum_dlistint(dlistint_t *head)
{
	int data = 0;

	if (!head)
		return (0);

	while (head)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
