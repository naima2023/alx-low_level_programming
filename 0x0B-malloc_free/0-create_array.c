#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - array of char
 *@size : size of array 
 *@c: character
 * Return : return a pointer to the array,or Null if it fail
 */

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;
if(size == 0)
return(NULL);

if(size != 0 )
{
 array = (char *)malloc(size * sizeof(char));
if(array !=0)
{
for (i = 0;i < size ;i++)
array[i] = c;

}
}

return(array);
}

