#include <stdio.h>
/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * all the alphabets in reverse order
 * only putchar shuld be used
 */

/**
 * main - this is the main and only function of the program
 * @void: no arguments passed on
 *
 * Return: 0
 */
int main(void)
{
	int c;

	c = 122;
	while (c >= 97)
	{
	putchar(c);
	c--;
	}
	putchar('\n');
return (0);
}
