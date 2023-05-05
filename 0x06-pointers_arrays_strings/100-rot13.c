#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*rot13 - encodes a string using rot13.
*@str: the string to modify
*Return: A pointer to encoded string
*/
char *rot13(char *str)
{
int i, j;
char c;
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
if (isalpha(c))
{
for (j = 0; j < 13; j++)
{
if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
{
c++;
}
else if (c == 'z')
{
c = 'a';
}
else if (c == 'Z')
{
c = 'A';
}
}
}
else
{
continue;
}
str[i] = c;
}
return (str);
}
