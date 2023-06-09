#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there are invalid char or if 'b' NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int bit;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bit = *b - '0';
		result = (result << 1) | bit;
	}

	return (result);
}

