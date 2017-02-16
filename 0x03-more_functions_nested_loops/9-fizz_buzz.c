#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
	unsigned char num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 != 0 && num % 5 != 0)
			printf("%d", num);
		if (num % 3 == 0)
			printf("%s", "Fizz");
		if (num % 5 == 0)
			printf("%s", "Buzz");
		if (num != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
