#include "main.h"
/**
*rev_string - reverses a string.
*@s: string to reverse
*Return: string in reverse
*/
void rev_string(char *s)
{
int length = 0, c = 0;
char *begin, *end, temp;
begin = s;
end = s;
while (*(s + length) != '\0')
{
length++;
}
for (c = 0; c < length - 1; c++)
{
end++;
}
for (c = 0; c < length / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}
