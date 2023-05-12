#include <stdio.h>
/**
*main - prints all arguments it receives.
*@argc: Number of arguments
*@argv: arrays of arguments
*Return: return 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}

	return (0);
}
