#include "function_pointers.h"

/**
* int_index - searches for an integer inside an array
* @array: array to search
* @size: size of array
* @cmp: comparison function
* Return: first location of array that matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i); 
	}
}
