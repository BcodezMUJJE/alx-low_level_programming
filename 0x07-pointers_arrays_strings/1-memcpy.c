#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (r = 0 ; r < i ; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
