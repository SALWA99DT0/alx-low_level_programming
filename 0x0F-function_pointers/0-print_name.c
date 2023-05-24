#include <stdio.h>
#include "function_pointers.h"

/**
*print_name -  prints a name by using a pointer to function
*@f: pointer to function
*@name: name prints by a function f
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (name == NULL || f == NULL)
		return;
}
