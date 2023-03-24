#include "main.h"

/**
*_islower - function that checks for lowercase character
*@c: integar value
*Return: returns 1 if c is lowercase 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
