#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  */
int main(int argc, char *argv[])
{
	int i = 0, Result = 0, reste = 0;
	int a[6] = {25, 10, 5, 3, 2, 1};

	if (argc == 2)
	{
	for (i = 0; a[i] < '\0'; i++)
	{
		reste = atoi(argv[2]) % atoi(a[i]);
		if ((atoi(a[i]) < atoi(argv[2])) && (reste > 0))
			Result += atoi(argv[2]) / atoi(a[i]);
	}
	}
	printf("%d\n", Result);
	return (0);
}
