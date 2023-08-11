#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: key to get the value of.
 *
 * Return: value associated with element, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	curr = ht->array[index];
	while (curr && strcmp(curr->key, key) != 0)
		curr = curr->next;

	return ((curr == NULL) ? NULL : curr->value);
}
