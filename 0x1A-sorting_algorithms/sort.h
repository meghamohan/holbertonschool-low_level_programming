#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: pointer to prevuius nde
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void recursiveSort(int *array, size_t size, int lo, int high);
void swap(int *i, int *j);
unsigned int partition(int array[], size_t size, int lo, int high);

void recurseMerge(int *array, int *copyArray, int lo, int hi);
void MergeArray(int *array, int *copyArray, int lo, int mid, int hi);
void merge_sort(int *array, size_t size);

#endif
