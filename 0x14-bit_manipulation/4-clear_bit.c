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
	unsigned long int x;
	unsigned int HD_V;
	unsigned int number = 64;

	if (index > number)
		return (-1);
	HD_V = index;
	for (x = 1; HD_V > 0; x *= 2, HD_V--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
