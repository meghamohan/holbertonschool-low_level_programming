#include "holberton.h"

/**
* *_strcpy - to copy a string to another
* @dest: destination string
* @src: source string
* Return: copied string
**/
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0 ; src[length] != '\0' ; length++)
		;
	for (i = 0 ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
