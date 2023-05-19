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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (n >= s2_len)
	n = s2_len;

	concat_str = malloc((concat_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strncat(concat_str + s1_len, s2, n);

	concat_str[concat_len] = '\0';
	return (concat_str);
}
