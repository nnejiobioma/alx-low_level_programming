#include "main.h"

/**
*print_rev - function that prints a string, in reverse, followed by a new line
*@s: - string
*
*Return: sting that is in reverse order
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
	i++;
	}
	while (i > 0)
	{
	i--;
	_putchar(s[i]);
	}
	_putchar('\n');
}
