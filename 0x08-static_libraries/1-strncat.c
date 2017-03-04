#include "holberton.h"
/**
  * char *_strncat - concats two strings
  * @dest: destination string
  * @src: source string
  * @n: max byte of src
  * Return: return dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
