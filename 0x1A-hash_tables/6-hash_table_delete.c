#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table.
* @ht: hash table to delete.
*
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *z, *s, *p;
	unsigned long int = i;

	if (ht == NULL)
		return;
	z = ht->array[i];
	for (i < ht->size; i++, z = ht->array[i])
		if (
		}
			s = z;
			while (s)
			{
				p = s->next;
				free(s->key);
				free(s->value);
				free(s);
				s = p;
			}
		}
	free(ht->array);
	free(ht);
}
