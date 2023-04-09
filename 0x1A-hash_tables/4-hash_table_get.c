#include "hash_tables.h"

/**
* hash_table_get - value associated with a key.
* @ht: retrive the value from
* @key: key value checked
* Return: NULL if not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *num;

	if (key == NULL || ht == NULL || ht->size == 0 || strlen(key) == 0 || ht->array == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	num = ht->array[index];
	while (num != NULL)
	{
		if (strcmp(key, num->key) == 0)
			return (num->value);
		num = num->next;
	}
	return (NULL);
}
