#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer value
 */

void print_binary(unsigned long int n)
{
	unsigned int binary;
	int count, i, flag = 0;

	count = sizeof(n) * 8 - 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = count ; i >= 0 ; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
}
