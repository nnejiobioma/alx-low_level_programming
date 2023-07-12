#include <stdio.h>
#include "search_algos.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * linear_search - this helps to search a value in array
 * integers using the Linear search algorithm
 * @array: this is used to search value
 * @size: the size of the array
 * @value: the value to look for
 *
 * Return: index of the first value found
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t z = 0;

	if (!array || size == 0)
		return (-1);

	while (z < size)
	{
		printf("Value checked array[%lu] = [%d]\n", z, array[z]);
		if (array[z] == value)
			return (z);
		z++;
	}

	return (-1);
}
