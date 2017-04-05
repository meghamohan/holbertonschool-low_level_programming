#include "holberton.h"
/**
* create_file - creates a file with read,writre permission and writes
* a text to it
* @filename: name of file to be created
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int file, writeReturn, closeReturn, length;

	writeReturn = file = closeReturn = length = 1;
	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[length] != '\0')
			length++;
		writeReturn = write(file, text_content, length);
	}
	if (writeReturn == -1)
		return (-1);
	closeReturn = close(file);
	if (closeReturn == -1)
		return (-1);
	return (1);
}
