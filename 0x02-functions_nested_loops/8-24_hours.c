#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of the day
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0 ; a <= 23 ; a++)
	{
		for (b = 0 ; b <= 59 ; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
