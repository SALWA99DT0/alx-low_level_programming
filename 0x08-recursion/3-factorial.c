#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*factorial - prints a function that returns the factorial of a given number.
*@n: n the integer to compute the factorial of.
*Return: the factorial of 'n', if 'n' is negative, return -1.
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

		return (n * factorial(n - 1));
}
