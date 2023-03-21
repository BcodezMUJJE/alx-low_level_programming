#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value odf thee last digit
 */
int print_last_digit(int n)
{
int ld;

ld = n % 10;
if (n < 0)
	ld = -ld;
_putchar(ld + '0');
return (ld);
}
