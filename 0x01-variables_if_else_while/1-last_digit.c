#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last =n %10;
	if (last >5){
		printf ("last digit of %d is %d and is greather than 5\n", n , last ); }
	else if (last ==0){
		printf("last digit of %d is %d and is 0\n", n , last); }
       else if (last<6 && !last == 0) {
		printf("last digit of %d is %d and is less than 6 and not 0"); }

	/* your code goes there */
	return (0);
}
