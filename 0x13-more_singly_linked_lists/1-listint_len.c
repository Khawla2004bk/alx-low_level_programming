#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
