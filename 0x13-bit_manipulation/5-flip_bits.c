#include "holberton.h"
/**
 * flip_bits - returns number of bits to be flipped
 * for 2 numbers to be the same
 * @n:first integer
 * @m:second integer
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipCounter = 0;
	int count, i;

	count = (sizeof(n) * 8) - 1;

	for (i = 0 ; i <= count ; i++)
	{
		if (((n ^ m) >> i) & 1)
			flipCounter++;
	}
	return (flipCounter);
}
