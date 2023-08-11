#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: key to add.
 * @value: value associated with key.
 *
 * Return: 1, if successful. Otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *curr;
	char *cp_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}

	curr = malloc(sizeof(hash_node_t));
	if (curr == NULL)
	{
		free(cp_value);
		return (0);
	}
	curr->key = strdup(key);
	if (curr->key == NULL)
	{
		free(curr);
		return (0);
	}
	curr->value = cp_value;
	curr->next = ht->array[index];
	ht->array[index] = curr;

	return (1);
}
