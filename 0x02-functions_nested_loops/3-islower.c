#include "main.h"
        /**
	 * _islower - check if char is lowercase
	 * @c: is the char to be checked int _islower
	 * Return: 1 if char is lowercase, otherwise 0.
	 */
int _islower(void c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
