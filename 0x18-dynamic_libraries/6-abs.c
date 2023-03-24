#include "main.h"

/**
*_abs - Start point.
*
*@n: this is a positive or negative integer
*
*Description: A fuction that computes the absolute value of an integer.
*
*Return: int
*/
int _abs(int n)
{
	int result;

	if (n < 0)
	{
	result = n * -1;
	return (result);
	}
	else
	{
	result = n;
	return (result);
	}
}
