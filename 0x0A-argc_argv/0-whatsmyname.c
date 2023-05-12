#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - this is the main function that prints its name, followed by a new line.
*@argv: an array of strings containing the command linge arguments
*@argc: the number of command line arguments
*Return: return 0 on success.
*/
int main(int argc, char *argv[])
{
	char *last_slash = strrchr(argv[0], '\n');

	if (last_slash != NULL)
{
	argv[0] = last_slash + 1;
}
	if (argc > 0)
{
	printf("%s\n", argv[0]);
}
	return (0);
}
