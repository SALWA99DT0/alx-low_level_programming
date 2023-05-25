#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sum of all its parameters.
*@n: first known argument
*@...: a variable arguments taht we will calculate the sum of.
*Return: 0 if n == 0, otherwise return the sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
