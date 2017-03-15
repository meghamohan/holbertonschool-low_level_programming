#include "function_pointers.h"

/**
 * array_iterator - function to call another function against every element in
 * an array
 * @array: array to work again
 * @size: size of array
 * @action: function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
