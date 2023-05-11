#include "main.h"
#include <math.h>
/**
*_sqrt_recursion - prints a function that returns,
*the natural square root of a number.
*@n: the number to calculat the square root of
*
*Return: If n does not have a natural square root,
*the function should return -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	int i = 1, result 1;

	while (result <= n)

{
	i++;
	result = i * i;
}
	return ((result == n) ? i : -1);
}
