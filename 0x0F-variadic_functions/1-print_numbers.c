#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers in a variadic function
 * @separator: separator between numbers
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (n < 1)
	{
		putchar('\n');
		return;
	}

	va_start(args, n);
	for (i = 0 ; i < (int) n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
