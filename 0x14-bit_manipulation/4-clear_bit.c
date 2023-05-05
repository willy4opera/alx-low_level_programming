#include "main.h"
#include <stdio.h>
/**
 * clear_bit - This funct, set the
 *  value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int hd;
	unsigned int num = 64;

	if (index > num)
		return (-1);
	hd = index;
	for (j = 1; hd > 0; j *= 2, hd--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
