#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 * or 100 on division/modulo by zero
 */
int main(int argc, char *argv[])
{
	int result;
	
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
