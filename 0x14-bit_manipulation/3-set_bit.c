#include "main.h"

/**
 * set_bit - This function
 *	sets value of a bit to
 *	1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Declare a coounter cariable G */
	unsigned long int G;

	/*Checks the index */
	if (index > 64)
		return (-1);

	for (G = 1; index > 0; index--, G *= 2)
		;
	*n += G;

	return (1);
}
