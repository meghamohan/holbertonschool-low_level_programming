#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space with copy of arg
* @str: string to copy
* Return: pointer to array or null
**/
char *_strdup(char *str)
{
	int i, len;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	for (len = 0 ; str[len] != '\0' ; len++)
		;
	len++;
	duplicate = malloc(sizeof(char) * len);

	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (duplicate[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}

