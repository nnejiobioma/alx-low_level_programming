#include "main.h"

/**
*main - _putchar, fllowd by a new linees
*Return: Alwys 0 (Success)
*
*/

int main(void)

{

	char ab[] = "_putchar";



	int s;



	for (s = 0; ab[s] < '\0'; s++)
	{

	_putchar(ab[s]);

	}

	_putchar('\n');

	return (0);

}
