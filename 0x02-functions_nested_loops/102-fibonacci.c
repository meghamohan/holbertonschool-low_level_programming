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

	for (n = 0 ; n < 50 ; n++)
	{
	temp = n1 + n2;
	n1 = n2;
	n2 = temp;
	if (n <= 49)
	printf("%lu,", temp);
	else
	printf("%lu\n", temp);
	}
return (0);
}
