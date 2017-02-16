#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long sum, n, n1, n2, temp;

	n1 = 0;
	n2 = 1;
	temp = 0;

	for (n = 0 ; n < 50 ; n++)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%lu", temp);
		if (n <= 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
