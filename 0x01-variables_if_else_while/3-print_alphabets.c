#include <stdio.h>

/**
* main _ This is the main function
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: function exits with 0
*/
int main(void)
{
char l,u;

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (u = 'A'; u <= 'Z'; u++)
{
putchar(u);
}
putchar(10);
return (0);
}
