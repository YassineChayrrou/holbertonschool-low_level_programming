#include "holberton.h"
/**
  *
  *
  *
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	int readContent, writeContent;
	char *buffer;

	if (filename == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readContent = read(fileDescriptor, buffer, letters);
	if (readContent == -1)
		return (0);
	writeContent = write(STDOUT_FILENO, buffer, readContent);
	if (writeContent == -1 || readContent != writeContent)
		return (0);
	free(buffer);
	close(fileDescriptor);
	return (writeContent);
}
