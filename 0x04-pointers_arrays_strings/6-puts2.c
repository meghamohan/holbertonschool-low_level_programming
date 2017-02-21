#include "holberton.h"

/**
* puts2 - prints one char out of 2 of a string
* @str: string pointer
* Return: null
*/
void puts2(char *str)
{
	int i, j, length;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	length = i - 1;
	for (j = 0 ; j < length ; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
