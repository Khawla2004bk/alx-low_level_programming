#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, n = 0;
	char rev = s[0];

	while (s[n] != '\0')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		n--;
		rev = s[i];
		s[i] = s[n];
		s[n] = rev;
	}
	_putchar('\n');
}
