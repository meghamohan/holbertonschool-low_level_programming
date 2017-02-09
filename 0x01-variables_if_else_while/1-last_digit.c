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
	int n,lastdigit=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n%10;
	if (lastdigit>5)
	printf("Last digit of %d is %d and is greater than 5\n",n,lastdigit);
	else if (lastdigit==0)
	printf("Last digit of %d is %d and is 0\n",n,lastdigit);
	else if (lastdigit<6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n",n,lastdigit);
	return (0);
}
