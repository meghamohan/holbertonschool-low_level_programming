#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints variadic number of strings
 * @separator: separator between numbers printed
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *temp;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	i = 0;
	while (i < (int) n)
	{
		temp = va_arg(args, char*);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
