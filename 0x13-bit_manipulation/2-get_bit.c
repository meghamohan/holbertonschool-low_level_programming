#include "holberton.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: input value
 * @index: index
 * Return: value of the bit at given index, -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
