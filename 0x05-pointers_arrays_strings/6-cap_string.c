#include "holberton.h"
/**
* cap_string - capitalize all lowercase letter to uppercase
* @s : string to convert
* Return: string
**/
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	while (s[i] != '\0')
	{
		switch (s[i])
		case ',': case ';': case '.': case '!':
		case '?': case '"': case '(': case ')':
		case '{': case '}': case ' ': case '\n': case '\t':
		{
			if (s[i + 1] >= 95 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	i++;
	}
	return (s);
}
