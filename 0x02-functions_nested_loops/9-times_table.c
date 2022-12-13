#include "main.h"

/**
*times_table - function that prints the 9 times table
*Return: void
*/

void times_table(void)
{
	int row, column, orange, test, wet;

	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	orange = row * column;
	test = orange / 10;
	wet = orange % 10;

	if (column == 0)
	{
	_putchar('0');
	}
	else if (orange < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(wet + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(test + '0');
	_putchar(wet + '0');
	}
	}
	_putchar('\n');
	}
}
