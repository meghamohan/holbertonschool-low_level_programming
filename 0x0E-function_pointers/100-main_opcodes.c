#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 *
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *pointer;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < bytes ; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if ( i == (bytes - 1))
			printf("\n");
		printf(" ");
	}
}
