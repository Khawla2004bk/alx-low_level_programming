#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int fnode;
	listint_t *tmp, *nv;

	if (*head == NULL)
		return (0);
	tmp = *head;
	next = tmp->next;
	fnode = tmp->n;
	free(tmp);
	*head = next;
	return (fnode);
}
