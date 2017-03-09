#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * exits with status value 98 on failure
 * @b: memory required
 * Return: pointer to memory requested
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
