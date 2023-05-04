#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strcmp - function that compares two strings
*@s1: destination to string
*@s2: source to string
*Return: pointer  to the resulting string dest
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}
