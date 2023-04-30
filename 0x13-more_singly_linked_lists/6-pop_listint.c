#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int fnode;
	listint_t *nv;

	if (!head || !*head)
		return (0);
	nv = (*head)->next;
	fnode = (*head)->n;
	free(*head);
	*head = nv;
	return (fnode);
}
