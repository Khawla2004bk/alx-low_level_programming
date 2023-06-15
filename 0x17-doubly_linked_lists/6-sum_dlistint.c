#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of doubly linked
 * @head: head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
