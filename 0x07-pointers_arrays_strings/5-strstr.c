#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: subtring
 * Return: pointer to the beginning of the located substring
 *         NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[a])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[b] == '\0')
			return (haystack + i);
		i++;
	}
	i++;
	return ('\0');
}
