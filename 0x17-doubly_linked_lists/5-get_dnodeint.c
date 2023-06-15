#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of dlistint_t
 * @head: head of list
 * @index: index of nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	j = 0;
	while (head != NULL)
	{
		if (j == index)
			break;
		head = head->next;
		j++;
	}
	return (head);
}
