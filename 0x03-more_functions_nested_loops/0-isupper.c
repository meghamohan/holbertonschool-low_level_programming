#include "holberton.h"
/**
 * _isupper - checks if the first character is upper case
 * @c : int to be checked
 * Return: Return 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	return (1);
	else
	return (0);
}

