#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i;
	char *checker;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		checker = va_arg(arg, char *);
		if (!checker)
			printf("nil");
		else
			printf("%s", checker);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
