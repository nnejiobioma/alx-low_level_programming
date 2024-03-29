#include "main.h"
#include <stdlib.h>

/**
 *  * array_range - creates an array of integers.
 *   * @min: first integer number
 *    * @max: last integer number
 *     *
 *      * Return: pointer to newly allocated memory or NULL if fails
*/
int *array_range(int min, int max)
{
	int s, l;
	int *a;

	if (min > max)
	return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
	return (NULL);
	for (s = 0; s < l; s++, min++)
	{
	a[s] = min;
	}
	return (a);
}
