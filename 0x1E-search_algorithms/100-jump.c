#include "search_algos.h"

/**
 * @array: this  pointers first element of array to search.
 * @size: number of elements in array.
 * @value: value to search
 * Return: the value if is not present or the array is NULL, -1.
 *
 * jump_search - Searches for a value in a sorted array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t z, t, jump;

	if (array == NULL || size == 0)
		return (-1);

	t = sqrt(size);
	for (z = jump = 0; jump < size && array[jump] < value;)
	{
	  printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
	  z = jump;
	  jump += t;
  }

	printf("Value found between indexes [%lu] and [%lu]\n", z, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; z < jump && array[z] < value; z++)
		printf("Value checked array[%lu] = [%u]\n", z, array[z]);
	printf("Value checked array[%lu] = [%u]\n", z, array[z]);

	return (array[z] == value ? (int)z : -1);
}
