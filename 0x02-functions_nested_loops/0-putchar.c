#include "main.h" 
/**
 * main - prints _putchar, followed by a new line.
 * The program should return 0
 * Return: Always return 0 (success)
 */
int main(void)
{
	char bode[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(bode[c]);
	}
	_putchar('\n');
	return (0);
}
