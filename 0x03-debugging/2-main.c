#include <stdio.h>
#include "main.h"

/**
* largest_number - returns the largest of three numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest = c;
if (b > largest)
{
largest = b;
}
if (a  > largest)
{
largest = a;
}
return largest;
}
int main(void)
{
int a, b, c;
int largest;
a = -972;
b = -98;
c = 0;
largest = largest_number(a, b, c);
printf("%d is the largest number\n", largest);
return (0);
}
