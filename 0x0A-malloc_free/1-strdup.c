#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space with copy of arg
* @str: string to copy
* Return: pointer to array or null
**/
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	j++;
	dup = malloc(sizeof(*str) * j);

	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
