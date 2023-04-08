#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: num of arg
 * @argv: command line arg
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
