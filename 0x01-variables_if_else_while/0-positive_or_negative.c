#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 0-positive_or_negative.c
 *
 * Description: This program prints
 * a randomly generated number
 * and prints whether the number is
 * negative, positive, or zero
 *
 */

/**
 * main - this is the main and only function of the program
 * @void: no arguments passed on
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
