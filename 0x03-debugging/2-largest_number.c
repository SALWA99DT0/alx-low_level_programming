#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
*
* function takes three integer arguments and returns the largest of the three.
* function takes largest(int a, int b, int c) and returns the largest of 3
* @a: first integer
* @b: second integer
* @c: third integer
*
* Return: largest number
*/
int largest(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b  && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
