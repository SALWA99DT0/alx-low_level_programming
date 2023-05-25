#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - prints strings, followed by a new line.
*@separator: the string to be printed between the strings
*@n: the number of strings passed to the function
*@...: A number of string to print
*Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strg;
	char *str;

	va_start(strg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strg);
}
