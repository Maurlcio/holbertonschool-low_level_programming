#include "lists.h"

/**
 *add_node - add a new node at the beginning of a list
 *@head: pointer to the pointer to the head node
 *@str: pointer to the string for the node list
 *Return: address of the new node if all good,, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	size_t count = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	first->str = strdup(str);

	while (str[count] != '\0')
		count++;

	first->len = count;
	first->next = *head;
	*head = first;

	return (*head);
}
