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
	int dest, source, closeReturn;
	int writeReturn, readReturn;
	char buff[BUFFER];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	if (source == -1)
		readError(argv[1]);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_RDONLY, mode);
	if (dest == -1)
		readError(argv[2]);

	readReturn = read(source, &buff, BUFFER);
	if (readReturn == -1)
		readError(argv[1]);
	while (readReturn > 0)
	{
		writeReturn = write(dest, &buff, readReturn);
		if (writeReturn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		readReturn = read(source, &buff, BUFFER);
		if (readReturn == -1)
			readError(argv[1]);
	}
	closeReturn = close(source);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
	closeReturn = close(dest);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

	return (0);
}

