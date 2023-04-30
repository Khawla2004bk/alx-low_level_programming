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
	unsigned int i;
	listint_t *nv, *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0 ; i < idx - 1 && h != NULL ; i++)
			h = h->next;
	}
	if (h == NULL && idx != 0)
		return (NULL);
	nv = malloc(sizeof(listint_t));
	if (nv == NULL)
		return (NULL);
	nv->n = n;
	if (idx == 0)
	{
		nv->next = *head;
		*head = nv;
	}
	else
	{
		nv->next = h->next;
		h->next = nv;
	}
	return (nv);
}
