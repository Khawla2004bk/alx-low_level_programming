#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: elements
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *tmp;

	(void)tmp;

	nv = malloc(sizeof(listint_t));

	if (nv == NULL)
		return (NULL);
	nv->n = n;
	nv->next = NULL;
	tmp = *head;
	if (*head == NULL)
		*head = nv;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = nv;
	}
	return (*head);
}
