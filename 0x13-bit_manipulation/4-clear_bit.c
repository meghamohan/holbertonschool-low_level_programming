#include "holberton.h"

/**
 * clear_bit - clears a bit at a given index
 *
 * @n: int value
 * @index: index of the bit to be set to 0
 * Return: 1 if it is set to 0, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	*n &= ~(mask);
	
	return (1);
}
