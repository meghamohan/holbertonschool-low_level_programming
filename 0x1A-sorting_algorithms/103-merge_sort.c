#include "sort.h"
/**
 * merge_sort - sorts array of integers in ascending order using
 * top-down merge sort algorithm
 * @array: list of integers
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *copyArray;
	
	if (array == NULL || size < 2)
		return;
	copyArray = malloc(sizeof(int) * size);
	recurseMerge(array, copyArray, 0, size);
}
/**
 * recurseMerge - recursively calls the function for splitting
 * @array: list of integers
 * @copyArray: copied array
 * @lo: lower index
 * @hi: higher index
 * Return- nothing
 */
void recurseMerge(int *array, int *copyArray, int lo, int hi)
{
	int mid;

	if (lo >= hi - 1)
		return;
	mid = lo + (hi - lo) / 2;
	recurseMerge(array, copyArray, lo, mid);
	recurseMerge(array, copyArray, mid, hi);
	MergeArray(array, copyArray, lo, mid, hi);
}


/**
 * MergeArray - Merges bith the arrays
 * @array: list of integers
 * @copyArray: copied array
 * @mid: mid index
 * @lo: lower index
 * @hi: higher index
 * Return- nothing
 */
void MergeArray(int *array, int *copyArray, int lo, int mid, int hi)
{
	int i;
	int s, m;

	s = lo;
	m = mid;
	printf("Merging...\n");
	printf("[left]: ");
	for (i = lo; i < mid - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	printf("[right]: ");
	for (i = mid; i < hi - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	for (i = lo; i < hi; i++)
	{
		copyArray[i] = array[i];
	}
	for (i = lo; i < hi; i++)
	{
		if (s >= mid)
		{
			array[i] = copyArray[m++];
		}
		else if (m >= hi)
		{
			array[i] = copyArray[s++];
		}
		else if (copyArray[m] < copyArray[s])
		{
			array[i] = copyArray[m++];
		}
		else
		{
			array[i] = copyArray[s++];
		}
	}
	printf("[Done]: ");
	for (i = lo; i < hi - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
