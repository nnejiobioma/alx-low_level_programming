#include "main.h"

/**
*int _strlen - report, by its very length
*defends itself against the risk of being read
*@s: string
*Return: the lenght of string
*
*/
int _strlen(char *s)
{
	int d;

	for (d = 0 ; s[d] != '\0' ; d++)
	;
	return (d);
}
