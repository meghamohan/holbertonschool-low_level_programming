#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: string pointer
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * doConcat - concats two strings, using n chars from s2
 * @s1: string one
 * @s2: string two
 * @l: bytes of s2 to use
 * Return: returns pointer to string, or NULL
 */
char *doConcat(char *s1, char *s2, int l)
{
	char *concat;
	int i, j;

	if (l > _strlen(s2))
		l = _strlen(s2);
	concat = malloc(_strlen(s1) + l + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0, j = 0 ; s1[i] != '\0' ; i++, j++)
		concat[j] = s1[i];
	for (i = 0 ; i < l ; i++, j++)
		concat[j] = s2[i];
	concat[j] = '\0';
	return (concat);
}

/**
 * string_nconcat - concats two strings, using n chars from s2,
 * or all if n is over s2
 *
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2 to use
 * Return: returns pointer to string, or NULL if s1/s2 empty or malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concatString = doConcat(s1, s2, n);
	return (concatString);
}
