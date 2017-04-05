#include "holberton.h"
/**
  * append_text_to_file - appends a text at the end of a file
  * @filename: file to append to
  * @text_content: the text to be written
  * Return: 1 if success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int writeReturn, closeReturn, length, file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (length = 0 ; text_content[length] != '\0' ; length++)
			;
		writeReturn = write(file, text_content, length);
	}
	if (writeReturn == -1)
		return (-1);
	closeReturn = close(file);
	if (closeReturn == -1)
		return (-1);
	return (1);
}
