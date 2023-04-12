#include "main.h"

/**
 * word_len - locates the index marking the end of the first word
 * @s: string
 * Return: the index marking the end of the initial word
 */
int word_len(char *s)
{
	int i = 0, l = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}
/**
 * count_words - counts the number of words
 * @s: string
 * Return: number of words
 */
int count_words(char *s)
{
	int i = 0, w = 0, l = 0;

	for (i = 0 ; *(s + i) ; i++)
		l++;
	for (i = 0 ; i < l ; i++)
		if (*(s + i) != ' ')
		{
			w++;
			i += word_len(s + i);
		}
	return (w);
}
/**
 *  strtow - splits a string into words
 * @str: string
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, let, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (w = 0 ; w < words ; w++)
	{
		while (str[i] == ' ')
			i++;
		let = word_len(str + i);
		s[w] = malloc(sizeof(char) * (let + 1));
		if (s[w] == NULL)
		{
			for (; w >= 0 ; w--)
				free(s[w]);
			free(s);
			return (NULL);
		}
		for (l = 0 ; l < let ; l++)
			s[w][l] = str[i++];
		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
