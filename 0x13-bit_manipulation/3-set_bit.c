#include "holberton.h"

/**
 * set_bit - sets a bit at a specific index to 1
 *
 * @n: int value
 * @index: index to set to 1
 * Return: returns 1 if it sets, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
