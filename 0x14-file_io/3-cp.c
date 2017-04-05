#include "holberton.h"
#define BUFFER 1024

void readError(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
* copy_file - copies the content of a file to another file
* @file1: file to copy from
* @fil2: file to copy to
* Return: nothing, or exit on failure
**/
void copyFile(char *file1, char *file2)
{
	int dest, source, openReturn, closeReturn;
	int writeReturn, readReturn;
	char *buff;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	source = open(file1, O_RDONLY);
	if (source == -1)
		readError(file1);
	dest = open(file2, O_CREAT | O_WRONLY | O_TRUNC | O_RDONLY, mode);
	if (dest == -1)
		readError(file2);
	buff = malloc(sizeof(char) * BUFFER);
	if (buff == NULL)
		exit(100);
	
	readReturn = read(source, buff, BUFFER);
	if (readReturn == -1)
		readError(file1);
	while (readReturn > 0)
	{
		writeReturn = write(file2, buff, readReturn);
		if (writeReturn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
		writeReturn = read(file1, buff, BUFFER);
		if (readval == -1)
			readError(file1);
	}
	closeReturn = close(file1);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	closeReturn = close(file2);
	if (closeReturn == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
}

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: pointer to argument
* Return: 0 on success, or exit with error message
**/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyFile(argv[1], argv[2]);
	return (0);
}
