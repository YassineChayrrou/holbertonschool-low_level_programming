#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *print_numbers - prints all number arguments
  *@separator: points to string
  *@n: takes number of arguments
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
