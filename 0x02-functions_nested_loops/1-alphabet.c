#include "holberton.h"

/**
* print_alphabet - Prints lowercase alphabets
* Return: nothing
**/

void print_alphabet(void)
{
	int a = 0;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
