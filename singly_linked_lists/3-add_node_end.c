#include "lists.h"

/**
 *add_node_end - adds a node at the end of a list
 *@head: pointer to the pointer to the head node
 *@str: the string to duplicate and insert to the node
 *Return: address of the new node, or NULL if error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode = malloc(sizeof(list_t));
	list_t *aux;
	int count = 0;

	if (endNode == NULL)
		return (NULL);

	endNode->next = NULL;
	endNode->str = strdup(str);

	while (str[count] != '\0')
		count++;

	endNode->len = count;

	aux = *head;

	if (aux == NULL)
		*head = endNode;

	else
	{
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = endNode;
	}

	return (*head);
}
