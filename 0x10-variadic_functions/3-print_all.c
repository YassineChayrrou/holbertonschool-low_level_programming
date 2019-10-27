#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printstring - print string element from va_list
 * @list: va_list passed to function
 */
void _printstring(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - print float type element from va_list
 * @list: va_list passed to function
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printint - print int type element from va_list
 * @list: va_list passed to function
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - print anything passed no matter what type
 * @format: string of formats to reference
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list list;
	char *a = "";

	checkformat fmt[] = {
		{ "c", _printchar},
		{ "f", _printfloat},
		{ "s", _printstring},
		{ "i", _printint},
	};

	va_start(list, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (fmt[j].type[0] == format[i / 4])
		{
			printf("%s", a);
			fmt[j].f(list);
			a = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
