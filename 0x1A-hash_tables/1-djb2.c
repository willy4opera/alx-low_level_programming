#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int numx;

	hsh = 5381;
	while ((numx = *str++))
		hsh = ((hsh << 5) + hsh) + numx; /* hash * 33 + numx */

	return (hsh);
}
