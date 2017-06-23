#include "sort.h"
/**
 * quick_sort - sorts an array using quick sort algo
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
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
	size_t partitionPoint;

	if (high <= lo)
		return;
	partitionPoint = partition(array, size, lo, high);
	recursiveSort(array, size, lo, partitionPoint - 1);
	recursiveSort(array, size, partitionPoint + 1, high);
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
	int i = 0, pivot, j;
	int temp;

	pivot = array[high];
	i = (lo - 1);
	for (j = lo; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
