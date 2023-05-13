#include "main.h"
#include <stdio.h>

/**
*_strchr - locate a character in a string.
*@s: the string to search in
*@c: character to search for
*Return: a pointer to the first occurrence of the character c in the string s,
*       or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
{
	if (*s == c)
	return (s);
	s++;
}
if (*s == c)
return (s);
return (NULL);
}

