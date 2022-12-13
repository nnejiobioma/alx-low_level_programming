#include "main.h"

/**
*print_sign - Start code
*
*Description: A fuction that check if a number is a
*negative, positive or zero integer.
*
*@n: integer value
*
*Return: 0 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	_putchar('0');
	return (0);
}
