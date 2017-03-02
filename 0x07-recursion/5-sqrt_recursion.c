#include "holberton.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: takes in an integer
  * Return: a starting number and n to compare
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (do_recursion(1, n));
}
/**
  * do_recursion - finds square root of a num by recursion
  * @x: takes in an integer
  * @y: takes in an integer
  * Return: return x compared to y
  */
int do_recursion(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (do_recursion(x + 1, y));
}
