#include <stdio.h>

/**
 *main - entry point
 *
 * Return: always (0)
 */

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float SUM;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			SUM += sum;
		a = b;
		b = sum;
	}
	printf("%.0f\n", SUM);
	return (0);
}
