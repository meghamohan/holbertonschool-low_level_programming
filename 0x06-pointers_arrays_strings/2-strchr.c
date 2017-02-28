#include <stdlib.h>
/**
* *_strchr - finds and locates character in a string
* @s: pointer to string
* @c: character to search
* Return: pointer to first occurrence of the c in s, or NULL
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
