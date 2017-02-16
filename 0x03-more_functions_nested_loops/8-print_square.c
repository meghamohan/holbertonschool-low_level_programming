#include "holberton.h"

/**
* print_square - prints a square of # followed ny newline
* @size: size of the square
* Return: nothing
**/
void print_square(int size)
{
	unsigned char i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
