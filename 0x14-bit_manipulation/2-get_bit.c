#include <stdio.h>
#include "main.h"



/**
 * get_bit - The get_bit function,
 *	get the value of a bit at
 *	a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h_d;

	if (index > 64)
		return (-1);

	h_d = n >> index;

	return (h_d & 1);
}
