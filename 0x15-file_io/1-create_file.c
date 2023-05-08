#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to name of file to create
 * @text_content: A pointer to a string to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int O, W, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(O, text_content, l);
	if (O == -1 || W == -1)
		return (-1);
	close(O);
	return (1);
}
