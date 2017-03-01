#include "holberton.h"
/**
  * _pow_recursion - returns the value x raised to the power of y
  * @x: takes in an integer
  * @y: takes in an integer
  * Return: x * x to the power of y-1;
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
