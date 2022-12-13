#include "main.h"

/**
*print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase.
*
*/
void print_alphabet_x10(void)
{
	int ab, i;

	for (i = 0; i < 10; i++)
	{
	for (ab = 'a'; ab <= 'z'; ab++)
	{
	_putchar(ab);
	}
	_putchar('\n');
	}
}
