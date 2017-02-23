#include "holberton.h"
/**
* _strcat - concatenates the string
* @dest: string to be concatenated
* @src: string on which concatenation is done
* Return: pointer to destination string
**/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
