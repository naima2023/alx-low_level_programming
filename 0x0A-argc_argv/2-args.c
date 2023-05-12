#include "main.h"
#include <stdio.h>

/**
 * main -prints all arguments 
 * @argc : number of line command arguments
 * @argv : array name
 * Return : 0
 */

int main ( int argc , char *argv[])

{
int count ;

for(count = 0; count < argc ;count++)

	printf("%s\n" , argv[count]);

return(0);
}

