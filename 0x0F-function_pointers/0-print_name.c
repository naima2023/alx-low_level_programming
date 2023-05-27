#include "function_pointers.h"
#include "stdlib.h"

/**
 * print-name - print a name
 * @name : namename
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

