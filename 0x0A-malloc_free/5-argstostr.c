#include "holberton.h"
#include <stdlib.h>
/**
* *argstostr - concatenates all arguments to program
* @ac: argument count
* @av: pointer to arguments
* Return: pointer to new space in memory or null
**/
char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	/* count the number of chars in each string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	newStr = malloc(sizeof(char) * size);
	if (newStr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newStr[k] = av[i][j];
		}
		newStr[k + 1] = '\n';
	}
	newStr[k] = '\0';
	return (newStr);
}
