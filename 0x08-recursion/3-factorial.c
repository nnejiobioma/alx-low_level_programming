#include "main.h"
/**
 *  * factorial - Return the factorial of a giiven number
 *   * @n: the integer number
 *    * Return: An integer
*/
int factorial(int n)
{
	int z;

	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	z = n * factorial(n - 1);
	}
	return (z);

}
