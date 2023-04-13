#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: of elements
 * @max: of elements
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *a;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
