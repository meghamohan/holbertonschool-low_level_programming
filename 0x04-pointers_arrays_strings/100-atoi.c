#include <stdio.h>
/**
* checkIfNum - checks if a given char is number or not
* @a: char to be checked
* Return: 1, if its a number, else 0
**/
int checkIfNum(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
/**
*  _atoi - a function that convert a string to an integer.
* @s: a pointer to a string
* Return: number of string, else 0
**/
int _atoi(char *s)
{
	int i = 0, neg = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (checkIfNum(s[i]) == 1)
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			if (s[i] == '-')
			{
				neg = neg * -1;
				i = i + 1;
				if (checkIfNum(s[i]) == 1)
				{
					result = result * 10 + (s[i] - '0');
				}
			}
			else if (result != 0)
			{
				break;
			}
		}
		i++;
	}
	return (neg * result);
}

