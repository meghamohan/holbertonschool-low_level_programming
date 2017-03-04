#include "holberton.h"
/**
  * char *_memset - function that fills memory with a constant byte
  * @s: source
  * @b: constant byte
  * @n: buffer size
  * Return: 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
