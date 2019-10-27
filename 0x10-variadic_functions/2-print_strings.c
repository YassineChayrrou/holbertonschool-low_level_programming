#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *print_strings - prints all string arguments
  *@separator: takes string
  *@n: takes number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *checker;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		checker = va_arg(arg, char *);
		if (checker)
			printf("%s", checker);
		else
			printf("nil");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
