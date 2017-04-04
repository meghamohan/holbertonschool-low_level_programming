#include "holberton.h"

/**
* read_textfile - reads a text file and print it to the POSIX standard output
* @filename: file to be read
* @letters: number of letters to read and print
* Return: number of letters that has been read and printed or else 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, writeReturn, readReturn;
	char charbuffer;
	unsigned int i;

	file = 0;
	writeReturn = 0;
	if (!filename)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	readReturn = read(file, &charbuffer, 1);
	if (readReturn == -1)
		return (0);
	for (i = 0 ; i != letters ; i++)
	{
		writeReturn = write(STDOUT_FILENO, &charbuffer, 1);
		if (writeReturn == -1)
			return (0);
		readReturn = read(file, &charbuffer, 1);
		if (readReturn == -1)
			return (0);
	}
	readReturn = close(file);
	if (readReturn == -1)
		return (0);
	return (i);
}
