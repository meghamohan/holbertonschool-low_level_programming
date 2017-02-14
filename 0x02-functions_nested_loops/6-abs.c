#include <stdlib.h>
#include "holberton.h"

/**
* _abs - finds the absolute value of an integer.
*
* @n: int to be evaluated
*
* Return: absolute value of an int
**/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	return (0);
}
