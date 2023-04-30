#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: head
 * Return: sum of all the data or 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
