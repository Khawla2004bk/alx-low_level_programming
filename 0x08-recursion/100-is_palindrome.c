#include "main.h"

/**
 * _strlen_recursion - size
 * @s: string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - palindrome
 * @s: string
 * @l: left index
 * @r: rigth index
 * Return: 1 if s is palindrome, 0 otherwise
 */

int pal_checker(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l > r / 2)
			return (1);
		else
			return (pal_checker(s, l + 1, r - 1));
	else
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

	return (pal_checker(s, 0, i - 1));
}
