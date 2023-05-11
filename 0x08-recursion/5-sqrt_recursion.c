#include "main.h"
#include <math.h>
/**
*_sqrt_recursion - prints a function that returns,
*the natural square root of a number.
*@n: the number to calculat the square root of
*
*Return: the square root of n,
*or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
/**
*_sqrt_recursion_helper - helper function for _sqrt_recursion
*@n: the number to calculate the square root of
*@i: the current guess for the square root of n
*Return: the square root of n, or -1 if n does not have a natural square root
*/
int _sqrt_recursion_helper(int n, int i)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
}
