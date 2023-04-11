#include "main.h"
#include <stdio.h>
/**
 * clear_bit - This function, sets the value
 *	of a bit to 0 at a given index
 * @n: A pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;
	unsigned int h_d;

	if (index > 64)
		return (-1);
	h_d = index;
	for (count = 1; h_d > 0; count *= 2, h_d--)
		;

	if ((*n >> index) & 1)
		*n -= count;

	return (1);
}
