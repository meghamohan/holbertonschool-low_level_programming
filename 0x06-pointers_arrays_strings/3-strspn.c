#include "holberton.h"
/**
* *_strspn - locates a character in a string
* @s: pointer to string
* @accept: character to search for
* Return: pointer to the first occurrence of the c in s, or NULL
**/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
			if (accept[j] == '\0')
				break;
	}
	return (count);
}
