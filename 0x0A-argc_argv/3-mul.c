#include <stdio.h>
#include <stdlib.h>
/**
  *main - multiply two arguments if they are numbers
  *@argc: takes argument count
  *@argv: takes argument vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i, Result;

	Result = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			Result *= atoi(argv[i]);
		}
		printf("%d\n", Result);
	}
	return (0);
}
