#include "holberton.h"
/**
  * char *_strncpy - function that copies a string
  * @dest: destination string
  * @src: source string
  * @n: max byte of src from dest
  * Return: return dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

