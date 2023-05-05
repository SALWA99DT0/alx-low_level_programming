#include "main.h"
#include <stdio.h>
/**
*cap_string - function that capitalizes all words of a string.
*@str: the string to modify
*Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 'a' - 'A';
}
while (str[i] != '\0')
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 'a' - 'A';
}
}
else
{
i++;
}
return (str);
}
