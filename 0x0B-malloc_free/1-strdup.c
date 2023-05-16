#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *array  = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	array  = (char *)malloc(n + 1 * sizeof(char));
	if (array  != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			array[i] = str[i];
	} else
	{
		return (NULL);
	}
	array[i] = '\0';
	return (array);
}

