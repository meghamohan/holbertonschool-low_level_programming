#include "holberton.h"
/**
* _strcat - concatenates the string
* @dest: string to be concatenated
* @src: string on which concatenation is done
* Return: pointer to destination string
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n <= 0)
		return (dest);
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	if (n >i)
		dest[i++] = '\0';
	return (dest);
}
