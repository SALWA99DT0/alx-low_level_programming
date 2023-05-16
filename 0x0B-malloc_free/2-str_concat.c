#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - function that concatenates two strings.
*@s1: first contents in allocated space in memory
*@s2: second contents in allocated space in memory
*Return: The function should return NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = strlen(s2);

	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(result, s1);
	else
	result[0] = '\0';
	if (s2 != NULL)
		strcat(result, s2);

	return (result);
}
