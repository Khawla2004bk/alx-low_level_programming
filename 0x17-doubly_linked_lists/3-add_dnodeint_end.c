#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of dlistint_t
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *neew;

	neew = malloc(sizeof(dlistint_t));
	if (neew == NULL)
		return (NULL);
	neew->n = n;
	neew->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = neew;
	}
	else
		*head = neew;
	neew->prev = h;
	return (neew);
}
