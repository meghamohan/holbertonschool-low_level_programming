#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_all - function that prints everything
* @format: list of all arguments of all types
*
* Return: void
**/
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *tempString;

	i = 0;
	va_start(args, format);
	while (format == NULL)
		printf("\n");
		return;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				tempString = va_arg(args, char*);
				if (tempString)
					printf("%s", tempString);
					break;
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' 
			|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
