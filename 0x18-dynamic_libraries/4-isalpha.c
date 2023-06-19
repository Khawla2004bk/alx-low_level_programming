#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the character in ASCII code
 * Return: 1  if c is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
