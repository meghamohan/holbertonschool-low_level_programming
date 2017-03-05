#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: result of multiplication or 1
**/
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
