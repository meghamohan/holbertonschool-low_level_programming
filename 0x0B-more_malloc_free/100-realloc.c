#include <stdlib.h>
#include "holberton.h"
/**
* *_realloc -  reallocates a memory block using malloc and free
* @ptr: void pointer
* @old_size: allocated size
* @new_size: new size to be allocated
* Return: pointer to newly allocated memory or null
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *newBlock;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	newBlock = malloc(new_size * sizeof(char));
	if (newBlock == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			newBlock[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (newBlock);
	}
	while (i < new_size)
	{
		newBlock[i] = ptr[i];
		i++;
	}
	free(ptr);
	return (newBlock);
}
