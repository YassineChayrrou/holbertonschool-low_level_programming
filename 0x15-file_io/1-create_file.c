#include "holberton.h"
/**
  *create_file - creates a file
  *@filename: filename
  *@text_content: pointer to char
  *Return: 1 or -1
  */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, len, writeContent;

	if (filename == NULL)
		return (-1);
	fileDescriptor = open(filename, O_CREAT | O_TRUNC | O_RDWR, 600);
	if (fileDescriptor == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fileDescriptor);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	writeContent = write(fileDescriptor, text_content, len);
	if (close(fileDescriptor) == -1)
		return (-1);
	if (writeContent == -1)
		return (-1);
	else
		return (1);
}
