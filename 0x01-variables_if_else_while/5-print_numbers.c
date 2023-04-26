#include <stdio.h>

/**
* main -Entry point 
* Description: It prints all single digit numbers followed by new line
* Return: the function returns 0
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
