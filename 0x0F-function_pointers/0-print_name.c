#include "function_pointers.h"
#include "stdlib.h"

/**
 * print_name - print a name
 * @name : name
 * @f : function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

