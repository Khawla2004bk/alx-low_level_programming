#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, r = 1;
	unsigned int i, j = 0;

	for (i = 0 ; i < 64 ; i++)
	{
		if (r == (diff & r))
			j++;
		r <<= 1;
	}
	return (j);
}
