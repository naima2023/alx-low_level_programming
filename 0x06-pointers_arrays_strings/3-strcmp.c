#include "main.h"
/**	**
 * _strcmp - function that that compares two strings
 * @s1: first value to compare
 *@s2: second value to compare
 *
 * Return: char comparate
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, a, m = 0;


	while (s1[i] != 0)
	{
	i++;
	}
	while (s2[j] != 0)
	{
	j++;
	}
	for (a = 0; a <= i && a <= j; a++)
	{
	if (s1[a] != s2[a])
	{
	m = (s1[a] - '0') - (s2[a] - '0');
	break;
		}
	}
	return (m);
}

