#include<time.h>
#include <stdlib.h>
#include<stdio.h>
/* betty style doc for function main goes there */
/**
* main - This function checks whether a random number assigned to n
* is positive or negative
* Return: the function returns 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{  printf("%d is positive\n",n);}

else if( n == 0 )
{ printf("%d is zero\n ",n);} 
  else 
{printf("%d is negative\n",n);
	  }
	return (0);
}
