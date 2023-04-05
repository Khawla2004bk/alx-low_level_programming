#include "main.h"

/**
 * _strlen_recursion - size
 * @s: string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: string
 * @l: position
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + 1))
		return (p1(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: string
 * Return: 1 if it is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (p1(s, i - 1));
}
