#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: node
 * @index: self-explanatory
 * Return: nth node!
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index && head != NULL)
	{
		head = head->next;
		a++;
	}
	return (head);
}
