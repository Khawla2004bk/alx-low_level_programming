#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for crackme5
 * @ac: number of arguments supplied to the program
 * @av: array of pointers to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	char paswd[7], *cdx;
	int len = strlen(av[1]), i, tmp;

	cdx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp = (len ^ 59) & 63;
	paswd[0] = cdx[tmp];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += av[1][i];
	paswd[1] = cdx[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= av[1][i];
	paswd[2] = cdx[(tmp ^ 85) & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (av[1][i] > tmp)
			tmp = av[1][i];
	}
	srand(tmp ^ 14);
	paswd[3] = cdx[rand() & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (av[1][i] * av[1][i]);
	paswd[4] = cdx[(tmp ^ 239) & 63];
	for (i = 0; i < av[1][0]; i++)
		tmp = rand();
	paswd[5] = cdx[(tmp ^ 229) & 63];
	paswd[6] = '\0';
	printf("%s", paswd);
	return (0);
}
