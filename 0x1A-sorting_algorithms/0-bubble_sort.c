#include "sort.h"
/**
 * swap - swap adjescent array elements
 * @a: points to first array element
 * @b: points to second array element
 * Return - nothing
**/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sort array of elements using bubble sort algo
 * @array: array to be sorted
 * @size: size of the array
 * Return - nothing
**/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
/*	char sortingDone;*/

	if (array == NULL || size < 2)
		return;
/*	sortingDone = 0;*/
	for (i = 0; i < size; i++)
	{
/**
*		if (sortingDone)
*			break;
*		sortingDone = 1;
*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
/*				sortingDone = 0;*/
				print_array(array, size);
			}
		}
		/**
		* if swapping is not done by inner for loop,
		* then break out of it
		* as it means that the array is already sorted
		*/
	}
}
