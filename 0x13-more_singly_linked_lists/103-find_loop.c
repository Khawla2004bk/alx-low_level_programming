#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 * Return: address of node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	if (!head)
		return (NULL);
	while (a && b && b->next)
	{
		b = b->next->next;
		a = a->next;
		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
