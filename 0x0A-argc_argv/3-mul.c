#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main- program multiplies two numbers
 * @argc: number of line command arguments
 * @argv : array name
 * Return : 0
 */

int main(int argc, char *argv[])
{
	int i,j;
	if (argc == 3)
	{
		for (i = 1; i < argc ;i++)
			j =atoi( argv[i]) *atoi( argv[i-1]);
		printf ("%d\n" , j);
	}
	else
	{
		printf( "Error \n");
		return(1);
	}
	return(0);
}

