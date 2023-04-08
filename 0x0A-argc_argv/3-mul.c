#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: num of arg
 * @argv: cmd line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
