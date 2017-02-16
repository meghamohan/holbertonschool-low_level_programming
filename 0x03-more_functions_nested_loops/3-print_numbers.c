#include "holberton.h"

/**
* print_numbers - prints the numbers, from 0 to 9
* Return: nothing
**/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
