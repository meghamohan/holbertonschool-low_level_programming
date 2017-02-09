#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * all the alphabets using putchar
 * only lowercase letters
 * should be printed
 */

/**
 * main - this is the main and only function of the program
 * @void: no arguments passed on
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar (c);
	c++;
	}
	putchar ('\n');
return (0);
}
