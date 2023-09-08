#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *d_new;
	char *val_cp;
	unsigned long int index, numx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (numx = index; ht->array[numx]; numx++)
	{
		if (strcmp(ht->array[numx]->key, key) == 0)
		{
			free(ht->array[numx]->value);
			ht->array[numx]->value = val_cp;
			return (1);
		}
	}

	d_new = malloc(sizeof(hash_node_t));
	if (d_new == NULL)
	{
		free(val_cp);
		return (0);
	}
	d_new->key = strdup(key);
	if (d_new->key == NULL)
	{
		free(d_new);
		return (0);
	}
	d_new->value = val_cp;
	d_new->next = ht->array[index];
	ht->array[index] = d_new;

	return (1);
}
