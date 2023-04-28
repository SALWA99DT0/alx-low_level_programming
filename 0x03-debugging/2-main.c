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
return (largest);
}
/**
 * main - Entry point for the program
 *
 * function initializes three integers and calls the largest_number function
 * to find the largest of the three. The result is printed to the console.
 *
 * Return: Always 0 (success)
 */
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
