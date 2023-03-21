#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0
 */

int main(void)
{
	unsigned long int i, J = 1, K = 2, j, j1, k, k1;

	printf("%lu", J);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", K);
		K = K + J;
		J = K - J;
	}
	j = J / 1000000000;
	j1 = J % 1000000000;
	k = K / 1000000000;
	k1 = K % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k + (k1 / 1000000000));
		printf("%lu", k1 % 1000000000);
		k = k + j;
		j = k - j;
		k1 = k1 + j1;
		j1 = k1 - j1;
	}
	printf("\n");
	return (0);
}
