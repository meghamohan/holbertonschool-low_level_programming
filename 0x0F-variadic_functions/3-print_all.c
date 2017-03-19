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
	va_list list1;
	int i;
	char *tempString;

	i = 0;
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list1, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list1, int));
				break;
			case 'i':
				printf("%d", va_arg(list1, int));
				break;
			case 'f':
				printf("%f", va_arg(list1, double));
				break;
			case 's':
				tempString = va_arg(list1, char*);
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
