#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
*_strdup - function returns a pointer to a new string which is a duplicate
*of the string str. Memory for the new string is obtained with malloc
*@str: the input string to be duplicated
*Return: A pointer to the duplicated string, NULL if memory allocate fails
*/
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
{
	return (NULL);
}
	len = strlen(str);

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
{
	return (NULL);
}
	strcpy(dup, str);
	return (dup);
}
