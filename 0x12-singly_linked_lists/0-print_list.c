#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - function that prints all the elements of a list_t list
 *@h: contains linked list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t num = 0;
	const list_t *temp = h;

	for (num = 0; temp; num++)
	{
	if (temp->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", temp->len, temp->str);
	temp = temp->next;
	}
	return (num);
}

