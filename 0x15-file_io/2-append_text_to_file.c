#include "holberton.h"
/**
  *append_text_to_file - appends text to file i guess
  *@filename: pointer to char
  *@text_content: pointer to char
  *Return:  1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, len, append;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fileDescriptor = open(filename, O_APPEND | O_WRONLY);
	if (fileDescriptor == -1)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	append = write(fileDescriptor, text_content, len);
	if (close(fileDescriptor) == -1)
		return (-1);
	if (append == -1)
		return (-1);
	else
		return (1);
}
