#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of
*  integers using the Binary search algorithm
* @array: points to the first element of the array
* @size: size of the array
* @value: value to be searched in the array
* Return: returns the position of valie on the array,
* if not found it returns -1
**/

int binary_search(int *array, size_t size, int value)
{
	int i, start, mid, hi;

	if (!array || !size)
		return (-1);
	start = 0;
	hi = size - 1;
	while (start <= hi)
	{
		printf("Searching in array: ");
		for (i = start; i < hi; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = start + ((hi - start) / 2);
		printf("mid = %d\n", mid); 
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			hi = mid;
		else
			start = mid + 1;
	}
	return (-1);
}

