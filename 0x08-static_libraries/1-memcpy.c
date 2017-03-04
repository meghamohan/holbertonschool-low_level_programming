#include "holberton.h"
/**
  * _memcpy - copies memory of src to dest
  * @dest: destination
  * @src: source
  * @n: buffer size
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
