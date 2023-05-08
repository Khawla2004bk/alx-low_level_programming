#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, l);
	if (O == -1 || W == -1)
		return (-1);
	close(O);
	return (1);
}
