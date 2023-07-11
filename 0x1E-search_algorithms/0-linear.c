#include "search_algos.h"
/**
  * linear_search - this search for a value in array
  * search.
  * @array: this will point to first element to search
  * @size: this is the number of element in array
  * @value: search function to return
  * Return: index where value is located or -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
