#include "main.h"
/**
*char *_strcpy - Write a function that copies the string pointed to by src.
*@dest: the buffer to which the string is to be copied
*@src: the string to be copied
*Return: A pointerto dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
