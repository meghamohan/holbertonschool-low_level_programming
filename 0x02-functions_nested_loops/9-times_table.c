#include "holberton.h"

/**
* times_table - function that prints the 9 times table
* Return: nothing
**/

void times_table(void)
{
	int num, count, digit1, digit2, product;

	count = 0;

	while (count <= 9)
	{
		num = 0;
		while (num <= 9)
		{
			product = count * num;

			if (product < 10)
			{
				if (num > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				digit2 = product % 10;
				digit1 = product / 10;
				_putchar(digit1 + '0');
				_putchar(digit2 + '0');
			}
			num++;
		}
		_putchar('\n');
		count++;
	}
}
