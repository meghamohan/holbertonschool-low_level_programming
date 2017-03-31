#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer value
 */

void print_binary(unsigned long int n)
{
	unsigned int binary;
	int count;

	count = sizeof(n) * 8;
	for (; count >= 0 ; count--)
	{
		binary = n >> count;
		if (binary & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
