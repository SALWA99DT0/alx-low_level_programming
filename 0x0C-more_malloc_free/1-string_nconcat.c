#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - function that concatenates two strings.
*@s1: the string to append to
*@s2: string to concatenate
*@n : number of bytes from s2 to concat to s1
*Return: pointer to resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t concat_len = s1_len + n;
	char *concat_str;
	size_t j;
	size_t i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2_len)
	n = s2_len;

	concat_str = malloc((concat_len + 1) * sizeof(char));

	for (i = 0; i < s1_len; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat_str[i++] = s2[j];
	}

	concat_str[i] = '\0';
	return (concat_str);
}
