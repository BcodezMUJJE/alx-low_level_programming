#include "main.h"

/**
 * set_bit - this turns on the bit at given index
 *
 * @n: the pointer to int to modify
 * @index: the index of bit to turn on
 * 
 * Return: 1 if successful, 0 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;

if (index > 63)
	return (-1);

*n = (mask | *n);

return (1);
}
