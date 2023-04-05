#include "main.h"

/**
 * check - for prime numbers
 * @i: int
 * @j: int
 * Return: int
 */

int check(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check(i + 1, j));
}

/**
 * is_prime_number - returns 1 if prime num, otherwise return 0
 * @n: num
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
