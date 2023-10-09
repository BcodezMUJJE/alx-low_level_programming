#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - this searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: An array is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for in the array
 *
 * Return: the first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array != NULL)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
}
return (-1);
}
