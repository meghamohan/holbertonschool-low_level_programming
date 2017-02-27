#include "holberton.h"
#include <stdlib.h>
/**
* *_strpbrk - searches a string for any of a set of bytes.
* @s: pointer to string to search
* @accept: pointer to substring to be searched
* Return: pointer to match or null
**/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (0);
}
