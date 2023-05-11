#include "main.h"
#include <math.h>
/**
*_pow_recursion - prints a function that returns,
*the value of x raised to the power of y.
*@y: the exponent
*@x: the base
*Return: If y is lower than 0, the function should return -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * pow(x, y - 1));
}
