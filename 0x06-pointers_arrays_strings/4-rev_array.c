#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
*reverse_array - function that reverses the content of an array of integers.
*@a: an array of integers
*@n:number of elements of the array
*Return: 0
*/
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
