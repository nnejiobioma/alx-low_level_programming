#include <stdlib.h>
#include <stdio.h>
#ifndef __search__
#define __search__

int interpolation_recursive(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int bin_search_recursive(int *array, size_t start, size_t end, int value);

#endif
