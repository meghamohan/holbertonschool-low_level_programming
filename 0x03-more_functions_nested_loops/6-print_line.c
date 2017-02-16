#include "holberton.h"
/**
* print_line - function that draws a straight line in the terminal
* @n: number of times the character gets _ printed
* Return: nothing
**/
void print_line(int n)
{
	int i;
	
	if (n==0)
	_putchar('\n');
	else
	{
	for (i = 0 ; i < n ; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
