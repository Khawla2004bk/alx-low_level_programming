#include "lists.h"

/**
 * _strlen - returns length of str
 * @s: char
 * Return: c
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ad;
	unsigned int l = 0;

	while (str[l])
		l++;
	ad = malloc(sizeof(list_t));
	if (ad == NULL)
		return (NULL);
	ad->str = strdup(str);
	ad->len = l;
	ad->next = *head;
	*head = ad;
	return (*head);
}
