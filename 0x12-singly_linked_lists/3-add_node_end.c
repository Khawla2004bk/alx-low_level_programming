#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1 = malloc(sizeof(list_t));
	list_t *node2 = *head;

	if (!head || !node1)
		return (NULL);
	if (str)
	{
		node1->str = strdup(str);
		if (!node1->str)
		{
			free(node1);
			return (NULL);
		}
		node1->len = strlen(node1->str);
	}
	if (node2)
	{
		while (node2->next)
			node2 = node2->next;
		node2->next = node1;
	}
	else
		*head = node1;
	return (node1);
}
