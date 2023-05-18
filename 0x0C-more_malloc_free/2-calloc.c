#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, g;

	g = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(d);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < g; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

