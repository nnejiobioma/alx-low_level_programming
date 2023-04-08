#include "hash_tables.h"

/**
* key_index - provides the index of a key/value
* @key: key to find the index..
* @size: size of hash table array.
*
* Return: The index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
