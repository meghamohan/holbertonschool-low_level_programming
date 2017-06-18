#include "sort.h"

/**
 * quick_sort - sorts an array using quick sort algo
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	recursiveSort(array, size, 0, size - 1);
}

/**
 * recursiveSort - recursively sorts array
 * @array: array to sort
 * @size: size of array
 * @lo: starting point
 * @high: ending point
 */
void recursiveSort(int *array, size_t size, int lo, int high)
{
	int partitionPoint;

	if (high <= lo)
		return;
	partitionPoint = partition(array, size, lo, high);
	recursiveSort(array, size, lo, partitionPoint - 1);
	recursiveSort(array, size, partitionPoint, high);
}

/**
 * swap - swaps two elements in an array
 * @array: array to swap in
 * @size: size of the array
 * @i: swapped with j
 * @j: swapped with i
 */
void swap(int *array, size_t size, int i, int j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
* partition - finds the pivot point
* @array: array passed
* @size: size of array
* @lo: starting index
* @high: last index
* Return - returns pivot point
*/
unsigned int partition(int array[], size_t size, int lo, int high)
{
	unsigned int i = 0, pivot, j;

	pivot = array[high];
	i = (lo - 1);
	for (j = lo; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, i, j);
		}
	}
	swap(array, size, (i + 1), high);
	print_array(array, size);
	return (i + 1);
}

