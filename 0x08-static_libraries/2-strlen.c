#include "holberton.h"
/**
  * _strlen - returns the length of a string
  * @s: takes in a string
  * Return: i, string length
  */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
