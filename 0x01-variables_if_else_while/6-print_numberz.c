#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: print the single digits of base 10
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
putchar('\n');
return (0);
}
