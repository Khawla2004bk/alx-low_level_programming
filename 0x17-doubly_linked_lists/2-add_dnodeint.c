#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of dlistint_t
 * @head: head of list
 * @n: value of element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *neew;
	dlistint_t *h;

	neew = malloc(sizeof(dlistint_t));
	if (neew == NULL)
		return (NULL);
	neew->n = n;
	neew->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	neew->next = h;
	if (h != NULL)
		h->prev = neew;
	*head = neew;
	return (neew);
}
