#include <stdio.h>
#include <stdlib.h>
/**
*main - function that prints multiplies two numbers.
*@argc: Number of arguments
*@argv: array of arguments
*Return: return 0 success, error 1.
*/
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
return (0);
}
