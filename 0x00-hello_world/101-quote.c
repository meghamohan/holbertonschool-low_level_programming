#include <stdio.h>
#include <unistd.h>
/*
* 101-quote.c
* Description: This program prints a string
* followed by a new line to the standar error
*/

/**
* main - The main function of the program.
* @void: Not taking any arguments.
*
* Return: 0
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}
