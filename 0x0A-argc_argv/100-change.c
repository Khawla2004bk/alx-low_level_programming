#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: num of arg
 * @argv: cmd line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, coins_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = atoi(argv[1]);
		while (c > 0)
		{
			if (c >= 25)
				c -= 25;
			else if (c >= 10)
				c -= 10;
			else if (c >= 5)
				c -= 5;
			else if (c >= 2)
				c -= 2;
			else if (c >= 1)
				c -= 1;
			coins_num += 1;
		}
	}
	printf("%d\n", coins_num);
	return (0);
}
