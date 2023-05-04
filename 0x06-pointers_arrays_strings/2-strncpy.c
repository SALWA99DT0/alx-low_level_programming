#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - function copies the string pointed by src to dest.
*@dest:  destination string
*@src: source string
*@n: max numbers of bytes to copy
*Return: A pointer to a destination
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
