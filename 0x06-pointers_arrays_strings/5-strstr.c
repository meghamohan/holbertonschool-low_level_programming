#include"holberton.h"
#include <stdlib.h>
/**
* *_strstr - function that locates a substring
* @haystack: pointer to string to search
* @needle: pointer to string to be searched
* Return: pointes to the beginneing of located substring or NULL
**/
char *_strstr(char *haystack, char *needle)
{
	char *result, *tmp = needle;

	while (*haystack != '\0')
	{
		needle = tmp;
		result = haystack;
		while (*needle != '\0' && *haystack != '\0' &&
		       *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (result);
		haystack++;
	}
	return (NULL);
}
