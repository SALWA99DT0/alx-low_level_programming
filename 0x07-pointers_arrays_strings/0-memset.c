#include "main.h"
#include <stdio.h>
/**
*_memset - fills memory with a constant byte.
*_memset function fills the first n bytes of the memory area,
*pointed to by s with the constant byte b
*@s: A pointer to the address of the memory block to fill
*@b: the value to fill each byte of the memory
*@n: unsigned int represents the num of bytes
*Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + i) = b;
return (s);
}
