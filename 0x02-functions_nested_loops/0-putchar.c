#include "main.h"

/**
*main - _putchar, fllowd by a new linees
*Return: Alwys 0 (Success)
*
*/

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
	_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
