#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0)
 */

int main(void)
{
	int i;

	for (i = '0' ; i < '9' ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	if (i == '9')
		putchar(i);
	return (0);
}
