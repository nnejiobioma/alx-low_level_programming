#include "hash_tables.h"

/**
* hash_table_create - Creates a new hash table.
* @size: size of the array.
*
* Return: pointer to the new hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;
	hash_node_t **node;

	n_table = calloc(1, sizeof(hash_table_t));
	if (n_table == NULL)
	return (NULL);

	n_table->size = size;
	n_table->array = calloc(size, sizeof(node));

	if (n_table->array == NULL)
	return (NULL);
	return (n_table);
}
