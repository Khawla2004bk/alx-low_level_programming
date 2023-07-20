#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of arg
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
