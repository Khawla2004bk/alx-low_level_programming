#include "main.h"

/**
 * str_checker - compare two strings
 * @s1: string
 * @s2: string
 * @l: left index
 * @j: special index
 * Return: 1 if s palindrome, 0 otherwise
 */

int str_checker(char *s1, char *s2, int l, int j)
{
	if (s1[l] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[l] == s2[j])
		return (str_checker(s1, s2, l + 1, j + 1));
	if (s1[l] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, l, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, l + 1, j) || str_checker(s1, s2, l, j + 1));
	return (0);
/**
 * wildcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 if identical strings, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
