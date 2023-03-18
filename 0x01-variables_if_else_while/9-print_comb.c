#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
