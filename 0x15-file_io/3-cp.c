#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}
/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments
 * @argv: An array of pointers to arg
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int from, to, R, W;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	R = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		W = write(to, buff, R);
		if (to == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		R = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
