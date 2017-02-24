#include "holberton.h"
/**
* string_toupper - convert all lowercase letter to uppercase
* @s : string to convert
* Return: string
**/
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
