#include "hash_tables.h"
/**
 * key_index - returns the index of the key
 * @key: key to search for
 * @size: size of the hashtable
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
