#include "search_algos.h"

/**
 * @value: This is the value to search.
 * @array: pointer to the first element of the array to search.
 * interpolation_search - this searches for a value in an array
 * @size: number of elements in the array.
 * Return: suppose the value is not present or the array is NULL, -1.
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t z, c, s;

	if (array == NULL)
		return (-1);

	for (s = 0, c = size - 1; c >= s;)
	{
		z = s + (((double)(c - s) / (array[c] - array[s])) * (value - array[s]));
		if (z < size)
			printf("Value checked array[%lu] = [%u]\n", z, array[z]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", z);
			break;
		}

		if (array[z] == value)
			return (z);
		if (array[z] > value)
			c = z - 1;
		else
			s = z + 1;
	}

	return (-1);
}
