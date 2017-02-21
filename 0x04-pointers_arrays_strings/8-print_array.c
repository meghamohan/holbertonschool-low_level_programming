#include "holberton.h"
#include <stdio.h>
/**
* print_array - to print an array
* @a: array
* @n: length of array
* Return: nothing
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1) ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
