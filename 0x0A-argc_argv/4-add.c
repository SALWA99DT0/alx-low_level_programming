#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - function that adds positive numbers.
*@argc: Number of arguments
*@argv: array of arguments
*Return: Always 0 (success) , 1 non digit
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
{
	printf("0\n");
	return (0);
}
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
{
	if (!isdigit(argv[i][j]))
{
	printf("Error\n");
	return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
