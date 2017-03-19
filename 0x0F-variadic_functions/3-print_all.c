#include "variadic_functions.h"

/**
 * print_all - prints all lists passed to it
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	char *tempStr;
	int i;

	va_start(lists, format);
	i = 0;
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(lists, int));
			break;
		case 'i':
			printf("%d", va_arg(lists, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(lists, double));
			break;
		case 's':
			tempStr = va_arg(lists, char*);
			if (tempStr != NULL)
			{	
				printf("%s", tempStr);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
