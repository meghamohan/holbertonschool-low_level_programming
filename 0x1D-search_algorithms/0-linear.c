#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
*  using the Linear search algorithm
* @array: points to the first element of array
* @size: number of elements in the array
* @value: search value
* Return: if value is found return the index , if value not
* present or if array is null return -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array || !*array || !size)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
