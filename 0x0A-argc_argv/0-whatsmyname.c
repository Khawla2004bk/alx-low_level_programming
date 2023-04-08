#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: num of arg
 * @argv: command line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
