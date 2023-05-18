#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
* string_nconcat - prints concatenate string;
* @s1: input string.
* @s2: input string.
* @n: len s2 string for print.
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
{
	unsigned int le = 0, i, a;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[le])
		le++;

	ptr  = malloc(sizeof(*ptr) * le + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, a  = 0; i < (l1 + n); i++)
	{
		if (i < l1)
		{
			ptr[i] = s1[i];
		}
		else
		{
	                ptr[i] = s2[a++];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

