#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int numx;
	unsigned char cmd_flg = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (numx = 0; numx < ht->size; numx++)
	{
		if (ht->array[numx] != NULL)
		{
			if (cmd_flg == 1)
				printf(", ");

			nd = ht->array[numx];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			cmd_flg = 1;
		}
	}
	printf("}\n");
}
