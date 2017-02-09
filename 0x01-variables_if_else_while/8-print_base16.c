#include <stdio.h>
/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * all the numbers of base16 in lowercase
 * followed by a newline
 * only putchar should be used
 */

/**
 * main - this is the main and only function of the program
 * @void: no arguments passed on
 *
 * Return: 0
 */
int main(void)
{
	char n = 48;
	char c = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (c <= 102)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
return (0);
}
