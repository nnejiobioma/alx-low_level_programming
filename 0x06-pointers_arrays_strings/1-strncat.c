#include "main.h"

/**
 *  * _strncat - function that concatenates two strings.
 *   * @dest: string to append by src
 *    * @src: string to append to dest
 *     * @n: largest number of bytes to append
 *      *
 *       * Return: address of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int b, j;

	b = j = 0;
	while (*(dest + b))
	b++;
	while (j < n && *(src + j))
	{
	*(dest + b) = *(src + j);
	b++;
	j++;
	}
	if (j < n)
	*(dest + b) = *(src + j);
	return (dest);
}
