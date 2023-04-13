#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: If the function fails return NULL
 *         otherwise return pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] ; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	len = 0;
	for (i = 0 ; s1[i] ; i++)
		s[len++] = s1[i];
	for (i = 0 ; s2[i] && i < len ; i++)
		s[len++] = s2[i];
	s[len] = '\0';
	return (s);
}
