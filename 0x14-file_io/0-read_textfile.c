#include "holberton.h"

/**
* read_textfile - reads a text file and print it to the POSIX standard output
* @filename: file to be read
* @letters: number of letters to read and print
* Return: number of letters that has been read and printed or else 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t writeReturn, readReturn, closeReturn;
	char *buffer;
	int file;

	file = 0;
	writeReturn = 0;
	readReturn = 0;
	closeReturn = 0;

	if (!filename)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	readReturn = read(file, buffer, letters);
	if (readReturn == -1)
		return (0);
	writeReturn = write(STDOUT_FILENO, buffer, readReturn);
	if (writeReturn == -1)
		return (0);
	closeReturn = close(file);
	if (closeReturn == -1)
		return (0);
	free(buffer);
	return (readReturn);
}
