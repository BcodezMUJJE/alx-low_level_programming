#include "search_algos.h"
#include <stdio.h>

/**
 * jump_search -  this searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: An array is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for in the array
 *
 * Return: the first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = 0, i = 0;

if (array != NULL)
{
while (high < size && array[high] < value)
{
low = high;
high = high + sqrt(size);
printf("Value checked array[%lu] = [%d]\n",
low, array[low]);
}
printf("Value found between indexes [%lu] and [%lu]\n",
low, high);
for (i = low; i <= high; i++)
{
if (i < size)
{
printf("Value checked array[%lu] = [%d]\n",
i, array[i]);
if (array[i] == value)
return (i);
}
}
}
return (-1);
}
