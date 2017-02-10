#include <stdio.h>
/*
 * 10-print_comb2.c
 *
 * Description:
 * This program prints all numbers between 00 and 99.
 * only 5 putchars should be used max
 */
/**
 * main - this is the main function
 * @void - no arguments
 *
 * Return: 0
 */
int main(void)
{
	int t = 48;
	int o = 48;
	int counter = 0;

	while (t <= 57)
	{
		while (counter <= 9)
		{
			putchar(t);
			putchar(o);

			if (t != 57 || o != 57)
			{
				putchar(',');
				putchar(' ');
			}

			o++;
			counter++;
		}
		counter = 0;
		t++;
		o = 48;
	}
	putchar('\n');
return (0);
}
