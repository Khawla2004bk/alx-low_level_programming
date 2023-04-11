#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the duplicated string, or NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i, l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		l++;
	a = malloc(sizeof(char) * (l + 1));

	if (a == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		a[i] = str[i];
	a[l] = '\0';
	return (a);
}
