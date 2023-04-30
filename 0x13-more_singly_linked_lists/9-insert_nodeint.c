#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the list where the new node should be added
 * @n: elements
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nv = malloc(sizeof(listint_t)), *h;

	if (head == NULL || !nv)
		return (NULL);
	nv->n = n;
	nv->next = NULL;
	if (!idx)
	{
		nv->next = *head;
		*head = nv;
		return (nv);
	}
	h = *head;
	while (h)
	{
		if (i == idx - 1)
		{
			nv->next = h->next;
			h->next = nv;
			return (nv);
		}
		i++;
		h = h->next;
	}
	free(nv);
	return (NULL);
}
