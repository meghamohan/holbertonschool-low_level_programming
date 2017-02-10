#include <stdio.h>
/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * all the numbers from 0 to 9
 * followed by a newline
 */

/**
 * main - this is the main and only function of the program
 * @void: no arguments passed on
 *
 * Return: 0
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
	putchar(num);
	if (num != 57)
	{
	putchar(',');
	putchar(' ');
	num++;
	}
	}
	putchar('\n');
return (0);
}
