#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list's name
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;

	}
	return (i);
}
