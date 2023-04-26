

#include <stdio.h>

/**
* main - This is the main function
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: The function returns 0
*/
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar(10);
return (0);
}
