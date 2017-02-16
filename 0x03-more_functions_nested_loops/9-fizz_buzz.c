#include <stdio.h>

/**
* main - entry point
* Return: 0
**/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 5 == 0 && i % 3 == 0)
				printf("FizzBuzz ");
			else
			{
			if (i % 3 == 0)
				printf("Fizz ");
			if (i % 5 == 0)
				printf("Buzz ");
			}
		}
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
