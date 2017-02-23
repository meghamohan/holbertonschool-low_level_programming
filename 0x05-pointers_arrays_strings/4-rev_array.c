#include "holberton.h"
/**
* reverse_array - reverses an array of integers
* @a: array on integers
* @n: number of elements in the array
* Return: null
**/
void reverse_array(int *a, int n)
{
	int temp, i = 0, limit = n-1;
	
	while (i < (n/2))
	{
		temp = a[limit];
		a[limit] = a[i];
		a[i] = temp;
		i++;
		limit--;
	}
}
