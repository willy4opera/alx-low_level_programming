#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int numx;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (numx = 0; numx < size; numx++)
		ht->array[numx] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *dev_new, *tmp;
	char *val_cpy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_cpy;
			return (1);
		}
		tmp = tmp->snext;
	}

	dev_new = malloc(sizeof(shash_node_t));
	if (dev_new == NULL)
	{
		free(val_cpy);
		return (0);
	}
	dev_new->key = strdup(key);
	if (dev_new->key == NULL)
	{
		free(val_cpy);
		free(dev_new);
		return (0);
	}
	dev_new->value = val_cpy;
	dev_new->next = ht->array[index];
	ht->array[index] = dev_new;

	if (ht->shead == NULL)
	{
		dev_new->sprev = NULL;
		dev_new->snext = NULL;
		ht->shead = dev_new;
		ht->stail = dev_new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		dev_new->sprev = NULL;
		dev_new->snext = ht->shead;
		ht->shead->sprev = dev_new;
		ht->shead = dev_new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		dev_new->sprev = tmp;
		dev_new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = dev_new;
		else
			tmp->snext->sprev = dev_new;
		tmp->snext = dev_new;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nd, *tmp;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		tmp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = tmp;
	}

	free(head->array);
	free(head);
}
