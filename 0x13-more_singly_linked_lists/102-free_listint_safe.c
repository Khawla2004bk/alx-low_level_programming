#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 * @head: head
 * Return: address of node where loop starts, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *l;

	if (head == NULL)
		return (NULL);

	for (l = head->next; l != NULL; l = l->next)
	{
		if (l == l->next)
			return (l);
		for (p = head; p != l; p = p->next)
			if (p == l->next)
				return (l->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint list
 * @h: head
 * Return: num of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t len;
	int n = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop || n) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop && n)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			n = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
