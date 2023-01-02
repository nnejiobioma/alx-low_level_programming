#include "main.h"

/**
 * * _strchr - Loctes a character in a string
 * *
 * * @s: The string to check
 * *
 * * @c: The character to find
 * *
 * * Return: Pointer to @s or NULL
 * *
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	s++;
	{
	return (s);
	}
	}
	return (0);
}
