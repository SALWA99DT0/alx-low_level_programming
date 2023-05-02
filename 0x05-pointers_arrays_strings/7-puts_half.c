#include "main.h"
/**
*puts_half - prints half of a string, followed by a new line.
*If the number of characters is odd,n = (length_of_the_string - 1) / 2
*@str: input
*/
void puts_half(char *str)
{
int length = 0, i;
while (*(str + length) != '\0')
length++;
if (length % 2 == 0)
i = length / 2;
else
i = (length + 1) / 2;
for (i = i; i < length; i++)
putchar(*(str + i));
putchar('\n');
}
