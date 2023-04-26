#include <stdio.h>

/**
* main - This is the main function
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: The function returns 0
*/
int main(void)
{
char n;
for (n = 'a' ; n <= 'z'; n++) {
putchar(n);
}

putchar(10);
return(0);

}



