#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *neew = NULL;
	dlistint_t *head;
	unsigned int j;

	if (idx == 0)
		neew = add_dnodeint(h, n);
	else
	{
		head = *h;
		j = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (j == idx)
			{
				if (head->next == NULL)
					neew = add_dnodeint_end(h, n);
				else
				{
					neew = malloc(sizeof(dlistint_t));
					if (neew != NULL)
					{
						neew->n = n;
						neew->next = head->next;
						neew->prev = head;
						head->next->prev = neew;
						head->next = neew;
					}
				}
				break;
			}
			head = head->next;
			j++;
		}
	}
	return (neew);
}
