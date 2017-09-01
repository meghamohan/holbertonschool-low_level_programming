#include "search_algos.h"
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#include <math.h>

/**
 * jump_search - uses jump search to find a given number in a sorted array
 *
 * @array: array to search in
 * @size: size of array
 * @value: value being searched for
 *
 * Return: returns the first index of the value, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, jump, start, stop;

	if (!array || !size)
		return (-1);

	jump = sqrt(size);
	start = 0;
	stop = 0;
	while (array[stop] < value && stop <= (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", stop, array[stop]);
		start = stop;
		stop = stop + jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, stop);
	stop = MIN(stop, ((int)size - 1));
	i = start;
	while (i <= stop)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
