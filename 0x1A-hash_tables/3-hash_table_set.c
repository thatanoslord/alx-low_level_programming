#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds a new node to the hashtable
 * @ht: hashtable pointer
 * @key: new item key
 * @value: new item value
 * Return: 1 if succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_cpy = strdup(value);

	if (!value_cpy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
