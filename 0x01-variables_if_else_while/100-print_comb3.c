#include <stdio.h>
/**
* 
* 
* 
* 
**/
int main(void)
{
	int num1 = 48, num2 = 49;

	while (num1 <= '8')
	{
		while(num2 <= '9')
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if ((num1 != '8') || (num2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	return (0);
}
