#include <stdio.h>

/**
* * main - Entry point
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: function exits with 0
*/
int main(void)
{
char c, d;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar(10);
return (0);
}
