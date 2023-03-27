#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int i,j, n = 0;
	char c;

	while (s[n] != '\0')
		n++;
	j = n - 1;
	for (i = 0 ; j >= 0 && i < j ; j-- ; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	_putchar('\n');
}
