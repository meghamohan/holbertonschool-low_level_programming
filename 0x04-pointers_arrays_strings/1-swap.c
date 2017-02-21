#include "holberton.h"

/**
* swap_int - to swap the values of a and b
* @a: integer pointer
* @b: integer pointer
* Return: null
*/
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
