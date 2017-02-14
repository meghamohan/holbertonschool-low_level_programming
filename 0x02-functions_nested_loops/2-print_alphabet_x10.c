#include "holberton.h"

/**
* print_alphabet_x10 - Prints lowercase alphabets 10times
* Return: nothing
**/

void print_alphabet_x10(void)
{
	int a = 0, n;

	for (n = 0 ; n < 10 ; n++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
		_putchar(a);
		}
		_putchar('\n');
	}
}
