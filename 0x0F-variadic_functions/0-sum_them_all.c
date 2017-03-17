#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic fn to sum all arguments
 *
 * @n: ints to sum
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list list1;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(list1, n);
	for (i = 0 ; i < (int)n ; i++)
	{
		sum += va_arg(list1, int);
	}
	va_end(list1);

	return (sum);
}
