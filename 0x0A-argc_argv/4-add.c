#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/** 
 * main - add positives numbers
 * @argc :number of line command arguments
 * @argv : array name
 * Return :0
 */

int main ( int argc ,char *argv[])
{
int i, j, size,sum;
char *ptr;

if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
ptr = argv[i];
size = strlen(ptr);

for (j = 0; j < size; j++)
{
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
}
return (0);
}

