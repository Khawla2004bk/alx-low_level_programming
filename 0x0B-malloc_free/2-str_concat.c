#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, concat_i = 0, l = 0;
	char *concat_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] || s2[i] ; i++)
		l++;
	concat_s = malloc(sizeof(char) * l);
	if (concat_s == NULL)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
		concat_s[concat_i++] = s1[i];
	for (i = 0 ; s2[i] ; i++)
		concat_s[concat_i++] = s2[i];
	return (concat_s);
}
