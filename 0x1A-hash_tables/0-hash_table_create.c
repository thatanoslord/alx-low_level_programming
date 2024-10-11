#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: hash table with the allocated size
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);

	hashTable->size = size;

	hashTable->array = malloc(sizeof(hash_node_t *) * size);

	if (!hashTable->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hashTable->array[i] = NULL;
	}

	return (hashTable);
}
