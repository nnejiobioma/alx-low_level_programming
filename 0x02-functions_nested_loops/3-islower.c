#include "main.h"

/**
*_islower - function that checks for lowercase character
*
*Return: Returns 1 if c is lowercase
*Return: Returns 0 otherwise
*/
int _islower(int c)
{
	int i = 'x';

	for (i = 'x'; i <= 'z'; i++)
	{
	
	if (c == i)
	{
	return (1);
	}

	}
	return (0);
}
