#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: string to be compared
* @s2: string to be compared
* Return: return 0 if strings are same ,neg or postive num otherwise
**/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s2 - *s1);
		s1++;
		s2++;
	}
	return (*s2 - *s1);
}
