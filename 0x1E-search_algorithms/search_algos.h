#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @next: This pointers to next node
 * @n: the integer
 * @index: the index of the node
 *
 * Description: the singly linked list node structure in code
 */
typedef struct listint_s
{
	int z;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @next: This pointers to next node
 * @n: the integer
 * @index: the index of the node
 * @express: this pointers to next node
 *
 * Description: the singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int s;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


void free_list(listint_t *list);
void print_list(const listint_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
int linear_search(int *array, size_t size, int value);


#endif
