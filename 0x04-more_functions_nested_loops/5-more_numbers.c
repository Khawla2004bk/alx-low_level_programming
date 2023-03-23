#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int l;
	char i;

	for (l = 1 ; l <= 10 ; l++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
