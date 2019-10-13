#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - function that adds integer arguments
  *@argc:takes argument count
  *@argv: argument vector
  *Return: 0 or 1
  */
int main(int argc, char *argv[])
{
	int i, j, Result;

	Result = 0;
		for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		Result = Result + atoi(argv[i]);
	}
	printf("%d\n", Result);
	return (0);
}
