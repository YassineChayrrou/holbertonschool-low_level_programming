#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - function that adds integer arguments
  *@argc:takes argument count
  *@argv: argument vector
  */
int main(int argc, char *argv[])
{
	int i, j, Result;

	Result = 0;
	if (argc == 0)
		printf("0 \n");
	else
	{
		for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error \n");
				return (1);
			}
		}
		Result += atoi(argv[i]);
	}
	printf("%d \n", Result);
	}
}
