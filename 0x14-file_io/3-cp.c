#include "holberton.h"
#define BUFFER 1024

/**
 * argError - prints error if number of args is wrong
 * Return: none
 */
void argError(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * readError - prints error if there is error reading from file
 * @file: pointer to a file
 * Return: none
 */
void readError(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * writeError - prints error text if there is error writing to a file
 * @file: pointer to a file
 * Return: none
 */
void writeError(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * closeError - prints error if you encounter error while closing file
 * @fd: file descriptor
 * Return: none
 */
void closeError(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
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
		argError();
	if (argv[1] == NULL)
		readError(argv[1]);
	if (argv[2] == NULL)
		writeError(argv[2]);
	source = open(argv[1], O_RDONLY);
	if (source == -1)
		readError(argv[1]);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (dest == -1)
		readError(argv[2]);

	readReturn = read(source, &buff, BUFFER);
	if (readReturn == -1)
		readError(argv[1]);
	while (readReturn > 0)
	{
		writeReturn = write(dest, &buff, readReturn);
		if (writeReturn == -1)
			writeError(argv[2]);
		readReturn = read(source, &buff, BUFFER);
		if (readReturn == -1)
			readError(argv[1]);
	}
	closeReturn = close(source);
	if (closeReturn == -1)
		closeError(source);
	closeReturn = close(dest);
	if (closeReturn == -1)
		closeError(dest);
	return (0);
}
