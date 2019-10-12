#include <stdio.h>
/**
  *
  *
  *
  */
int main(int argc, char *argv[])
{
	int i, Result;

	Result = 
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
