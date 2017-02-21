#include "holberton.h"

/**
* puts_half - to print second half of a string
* @str: char pointer
* Return: length of the string
**/

void puts_half(char *str)
{
	int j, length, halflength;

	for (length = 0 ; str[length] != '\0' ; length++)
		;
	if (length % 2 == 0)
		halflength = length / 2;
	else
		halflength = (length - 1) / 2;

	for (j = halflength ; j <= length ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
