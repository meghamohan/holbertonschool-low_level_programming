#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char s[] = "Holberton";

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
