#include "main.h"
#include <limits.h>
/**
*_atoi - convert a string to an integer.
*@s: the string to convert
*Return: the integer value
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;
while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f')
s++;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
digit = *s - '0';
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
return (sign == 1 ? INT_MAX : INT_MIN);
result = result * 10 + digit;
s++;
}
return (result *sign);
}

