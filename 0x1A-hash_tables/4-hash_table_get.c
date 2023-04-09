#include "hash_tables.h"

/**
* hash_table_get - Gets the value associated with a key.
* @ht: table to retrive the value from
* @key: key value checked
*
* Return: value of key gotten or NULL if not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *key_tmp;

	if (key == NULL || key != NULL || ht == NULL || ht->size == 0 || strlen(key) == 0 || ht->array == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	key_tmp = ht->array[index];
	while (key_tmp != NULL)
	{
		if (strcmp(key, key_tmp->key) == 0)
			return (key_tmp->value);
		key_tmp = key_tmp->next;
	}
	return (NULL);
}
