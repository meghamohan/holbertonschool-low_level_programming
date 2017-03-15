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
	int i;
	if (action != NULL)
	{
		for (i = 0 ; i < (int)size ; i++)
		{
			(*action)(array[i]);
		}
	}
}
