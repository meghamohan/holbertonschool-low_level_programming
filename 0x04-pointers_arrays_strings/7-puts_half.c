#include "holberton.h"

/**
* puts_half - to print second half of a string
* @str: char pointer
* Return: length of the string
**/

void puts_half(char *str)
{
	int j, length;

	for (length = 0 ; str[length] != '\0' ; length++)
		;
	for (j = length / 2 ; j <= length ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
