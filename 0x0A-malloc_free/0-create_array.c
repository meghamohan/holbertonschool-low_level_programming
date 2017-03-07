#include "holberton.h"
#include <stdlib.h>
/**
* *create_array - creates an array of chars, and initializes it with a char
* @size: size of array
* @c: char to be initialized
* Return: pointer to array or else return null
**/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	
	i = 0;
	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
