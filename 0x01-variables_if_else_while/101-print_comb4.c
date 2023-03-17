#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = '0'; j < '9'; i++)
	{
		for (j = '1'; j < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' && j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
