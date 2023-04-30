#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: elements
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv;

	nv = malloc(sizeof(listint_t));
	if (nv == NULL)
		return (NULL);
	nv->n = n;
	nv->next = *head;
	*head = nv;
	return (nv);
}
