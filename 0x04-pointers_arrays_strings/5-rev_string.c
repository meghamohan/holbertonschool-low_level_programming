#include "holberton.h"

/**
* rev_string - to reverse the value of string
* @s: input string pointer
* Return: null
*/

void rev_string(char *s)
{
	int i, j, k, length;
	char temp1, temp2;
	for (i = 0 ; s[i] != '\0' ; i++)
		;
	length = i -1;
	k = 0;
	for (j = length ; k < length ; j--)
	{
		temp2 = s[j];
		temp1 = s[k];
		s[k] = temp2;
		s[j] = temp1;
		k++; 
	}
}
