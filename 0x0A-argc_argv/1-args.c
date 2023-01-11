#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - a program that prints number of arguments
 *   * @argc: first parameter
 *    * @argv: second parameter
 *     *
 *      * Description: prints number of arguments
 *       * Return: 0 for code success
*/

int main(int argc, char **argv)
{
	int c;

	for (c = 0; c < argc; c++)
	{
	*argv[c] = *argv[c];
	}
	printf("%d\n", (c - 1));
	return (0);
}
