#include "holberton.h"
/**
* leet - encodes the string
* @s : string to convert
* Return: string
**/
char *leet(char *s)
{
	int i = 0, j = 0;
	char a[] = "a4e3o0t7l1";

	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if ((s[i] == a[j]) || (s[i] == a[j] - 32))
			{
				s[i] = a[j + 1];
				break;
			}
			j = j + 2;
		}
		j = 0;
		i++;
	}
	return (s);
}
