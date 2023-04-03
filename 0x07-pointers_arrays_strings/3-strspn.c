#include "main.h"

/**
 * _strspn - gets lenght of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		if (s[i] != ' ')
			for (j = 0 accept[j] != '\0' ; j++)
				if (accept[j] == s[i])
					z++;
		else
			return (k);
	return (k);
}
