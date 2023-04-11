#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0 ; arg < ac ; arg++)
	{
		for (byte = 0 ; av[arg][byte] ; byte++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (arg = 0 ; arg < ac ; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			s[i++] = av[arg][byte];
		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
