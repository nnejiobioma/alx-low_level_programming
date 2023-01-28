#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *main - function that prints all the elements of a list_t list
 *@h: contains linked list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->n;
}
return (i);
}

