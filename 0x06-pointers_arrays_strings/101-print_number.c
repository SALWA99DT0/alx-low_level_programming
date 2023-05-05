#include "main.h"
#include <unistd.h>
/**
*print_number - function that prints an integer.
*@n: the integer to print
*Return: void
*/
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
_putchar('_');
num = -n;
}
else
{
num = n;
}
if (num / 10 != 0)
{
print_number(num / 10);
}
_putchar (num % 10 + '0');
}
