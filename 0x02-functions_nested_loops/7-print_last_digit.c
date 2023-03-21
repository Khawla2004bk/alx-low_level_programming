#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer
 *
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (r >= 0)
	{
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' - r);
		return (-r);
	}
	_putchar('\n');
}

