#include "holberton.h"
#define BUFFER 1024

void readError(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: pointer to argument
* Return: 0 on success, or exit with error message
**/
int main(int argc, char **argv)
{
	int dest, source, openReturn, closeReturn;
	int writeReturn, readReturn;
	char *file2, *file1, buff[BUFFER];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = argv[1], file2 = argv[2];

	source = open(file1, O_RDONLY);
	if (source == -1)
		readError(file1);
	dest = open(file2, O_CREAT | O_WRONLY | O_TRUNC | O_RDONLY, mode);
	if (dest == -1)
		readError(file2);

	readReturn = read(source, &buff, BUFFER);
	if (readReturn == -1)
		readError(file1);
	while (readReturn > 0)
	{
		writeReturn = write(file2, &buff, readReturn);
		if (writeReturn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
		readReturn = read(file1, &buff, BUFFER);
		if (readReturn == -1)
			readError(file1);
	}
	closeReturn = close(file1);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	closeReturn = close(file2);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);

	return (0);
}

