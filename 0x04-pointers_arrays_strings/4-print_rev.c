#include "holberton.h"

/**
* print_rev - to reverse the value of string and print it
* @s: string pointer
* Return: null
*/
void print_rev(char *s)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	for (j = i - 1 ; j >= 0 ; j--)
		{
		_putchar(s[j]);
		}
	_putchar('\n');
}
