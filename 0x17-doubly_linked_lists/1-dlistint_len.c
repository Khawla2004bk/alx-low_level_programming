#include "lists.h"

/**
 * dlistint_len - returns num of elements in double linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
