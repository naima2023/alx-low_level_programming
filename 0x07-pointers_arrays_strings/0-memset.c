#include "main.h"
/**
 * _mumset :function that fills memory with a constant byte.
 * @s:first value
 * @b : the constant byte 
 * @n : the lenght 
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;
	 while ( i < n)
	 {
		 *(s + i ) = b;

		 i++;
	 }
	 return (s);
}

