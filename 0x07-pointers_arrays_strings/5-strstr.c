#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - locates a substring.
*@needle: a pointer to the beginning of a substring
*@haystack: a pointer to the beginning of a string
*Return: a pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
{
	for (j = 0; needle[i]; j++)
{
	if (haystack[i + j] != needle[j])
	break;
}
	if (!needle[j])
	return (haystack + i);
}
	return (NULL);
}
