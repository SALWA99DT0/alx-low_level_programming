#include "main.h"
#include <stdio.h>
/**
*leet - encodes a string into 1337.
*@str: the string to modify or replace
*Return: A pointer to replace string
*/
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j];
break;
}
}
}
return (str);
}
