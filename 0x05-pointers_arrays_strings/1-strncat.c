#include "holberton.h"
#include <stdio.h>
/**
* _strncat - concatenates the string upto n characters
* @dest: string to be concatenated
* @src: string on which concatenation is done
* @n: postion till which the string has to be concatenated
* Return: pointer to destination string
**/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
