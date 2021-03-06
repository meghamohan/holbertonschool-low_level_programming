#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value that should be contained in array
 * @max: size of array
 * Return: returns pointer to allocated space, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
		array[i++] = min++;
	return (array);
}
