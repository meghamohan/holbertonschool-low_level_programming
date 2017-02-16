#include "holberton.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
* Return: nothing
**/
void print_diagonal(int n)
{
	unsigned char i, j;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 0 ; i < n ; i++)
	{
	for (j = 0 ; j < i ; j++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
