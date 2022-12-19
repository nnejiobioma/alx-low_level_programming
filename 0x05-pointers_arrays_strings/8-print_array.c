#include "main.h"
#include <stdio.h>
/**
*print_array - prints n times the elements of an array
*@a: the pointer to the elements
*@n: times to print elements
*/
void print_array(int *a, int n)
{
	int d;

	for (d = 0 ; d < n ; d++)
	{
	printf("%d", a[d]);

	if (d < n - 1)
	{
	printf(", ");
	}
	}
	putchar('\n');
}
