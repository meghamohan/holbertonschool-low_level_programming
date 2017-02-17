#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143/2;
	unsigned long i = 2;

	while (num > i)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			i++;
		}

	}
	printf("%lu\n", i);
	return (0);
}
