#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers of arguments 
 * @argc : Number pf arguments
 * @argv Array name
 * Return : 0
 */

int main(int argc, char *argv[])
{
int count;

if (argc == 1)
{
printf("%d\n" , argc - 1 );

for ( count = 0; *argv ;count++ ,argv++);
printf( "%d\n",count - 1);

return(0);
}

