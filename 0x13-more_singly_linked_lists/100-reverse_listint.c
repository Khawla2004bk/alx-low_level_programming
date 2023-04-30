#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j = NULL;

	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}
	*head = i;
	return (*head);
}
