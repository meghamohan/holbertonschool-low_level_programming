
#include "holberton.h"
/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to string
* Return: 1 if string is palindrome  else 0
**/
int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
		return (0);
	length = check_length(s);
	return (check_string(s, 0, length - 1));
}
/**
* check_length - finds the length of a string
* @s: pointer to string
* Return: length of string
**/
int check_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (check_length(s + 1) + 1);
}
/**
* check_string - checks if two chars of a string are equal
* @s: string to be checked
* @fi: first index
* @li: last index
* Return: 1 if equal, else 0
**/
int check_string(char *s, int fi, int li)
{
	if (fi == li)
		return (1);
	else if (s[fi] == s[li])
		if (li == fi + 1)
			return (1);
		else
			return (check_string(s, fi + 1, li - 1));
	else
		return (0);
}
