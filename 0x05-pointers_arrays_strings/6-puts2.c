#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_pitchar(str[i]);
		i++;
	}
	_putchar('\n');
}
