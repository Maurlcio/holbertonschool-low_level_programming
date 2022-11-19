#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: node
 * Return: the, the sum. of, yknow...
 */

int sum_listint(listint_t *head)
{
	int data = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
