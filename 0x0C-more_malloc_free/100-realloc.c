#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * @ptr: a pointer to the memory previously allocated
 * Return: new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		for (i = 0 ; i < old_size ; i++)
			p[i] = oldp[i];
	free(ptr);
	return (p);
}
