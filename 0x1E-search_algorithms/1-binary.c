#include "search_algos.h"

/**
 * binary_search - this searches for a value in an array
 * integers using the Binary search algorithm
 *
 * @size: number of elements in array
 * @array: this pointers to first element of array to search
 * @value: The value to search
 *
 * Return: return first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t z = 0, low = 0, mid = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;
		z = low;

		printf("Searching in array: ");

		for (; z <= high; ++z)
		{
			if (z != low)
				printf(", %d", array[z]);
			else
				printf("%d", array[z]);
		}

		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
