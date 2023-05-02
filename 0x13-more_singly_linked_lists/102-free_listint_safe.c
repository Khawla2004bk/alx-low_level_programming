#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: head
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}
	*h = NULL;
	return (ln);
}
