#include <stdio.h>
/**
* main - a function that prints the number of arguments passed into it.
*@argc: thr number of command line arguments passed to a program,
*when it executed.
*@argv: array of strings that contains the command line arguments.
*Return: return 0 success
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
