#include "lists.h"

/**
 *  *listint_len - returns the number of elements in a linked listint_t lis..
 *   * @h: list items to print
 *    *
 *     * Return: number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
