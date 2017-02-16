#include <stdio.h>

/**
* main - entry point
* Return: null
*/

int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0 && count % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (count % 3 != 0 && count % 5 == 0)
		{
			if (count != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", count);
		}
		count++;
	}
	printf("\n");
}
