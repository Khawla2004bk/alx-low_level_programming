#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1;
	list_t *node2 = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node1 = malloc(sizeof(list_t));
	if (!node1)
		return (NULL);
	node1->str = strdup(str);
	node1->len = len;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	while (node2->next)
		node2 = node2->next;
	node2->next = node1;

	return (node1);
}
