#include "hash_tables.h"

/**
* hash_table_set - adds element to the hash table.
* @ht: hash table to add element to.
* @key: key/value pair.
* @value: key/value to store.
*
* Return: 1 on success, 0 on fail.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_key, *z;

	if (key == NULL || key != NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		for (z = ht->array[index]; z; z = z->next)
			if (strcmp(key, z->key) == 0)
			{
				free(z->value);
				z->value = strdup(value);
				return (1);
			}
	new_key = calloc(sizeof(*new_key), 1);
	if (new_key == NULL)
		return (0);
	new_key->key = strdup(key);
	new_key->value = strdup(value);
	if (new_key->key == NULL || new_key->value == NULL)
	{
		free(new_key->key);
		free(new_key->value);
		free(new_key);
		return (0);
	}
	new_key->next = ht->array[index];
	ht->array[index] = new_key;
	return (1);
}
