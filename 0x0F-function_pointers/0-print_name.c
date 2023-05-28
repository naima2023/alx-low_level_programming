#include "function_pointers.h"
#include "stdlib.h"

/**
 * print-name - print a name
 * @name : name
 * @f : function pointer
 *
 * Return : no return 
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

