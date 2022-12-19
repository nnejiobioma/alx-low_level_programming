#include "main.h"

/**
*rev_string - reverses a string
*@s: string to reverse
*
*Return: void
*/
void rev_string(char *s)
{
	int c = 0, j = 0;
	char str[500];

	while (*(s + c))
	{
	*(str + c) = *(s + c);
	c++;
	}
	c = c - 1;
	while (c >= 0)
	{
	*(s + c) = *(str + j);
	j++;
	c--;
	}
}
