#include "main.h"
/**
 * _memcpy : function that copies memory area 
 * @dest : adress to print 
 * @src :second  value 
 * @n : third value
 * @Return : new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i ;
	for (i = 0; i < n ;i++ )
	{
              dest[i] = src[i];
	}
	return (dest);
}

