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
	if (!copyArray)
		return;
	recurseMerge(array, copyArray, 0, size - 1);
	free(copyArray);
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

	if (lo >= hi)
		return;
	mid = (lo + hi) / 2;
	recurseMerge(array, copyArray, lo, mid);
	recurseMerge(array, copyArray, mid + 1, hi);
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
	int l, r;

	l = lo;
	r = mid + 1;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(&array[lo], mid + 1 - lo);
	printf("[right]: ");
	print_array(&array[mid + 1], hi - mid);

	for (i = lo; l <= mid && r <= hi; i++)
	{
		if (array[l] <= array[r])
			copyArray[i] = array[l++];
		else
			copyArray[i] = array[r++];
	}
	/* merging the arrays from l */
	while (l <= mid)
		copyArray[i++] = array[l++];
	/* meriging arrays from right */
	while (r <= hi)
		copyArray[i++] = array[r++];
	for (i = 0; i <= hi; i++)
		array[i] = copyArray[i];

	printf("[Done]: ");
	print_array(copyArray, i);
}
