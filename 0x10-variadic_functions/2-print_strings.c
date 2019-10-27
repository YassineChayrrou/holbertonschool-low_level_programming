#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *checker;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		checker = va_arg(ap, char *);
		(checker) ? printf("%s", checker) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
