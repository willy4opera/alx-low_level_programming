#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: is the decimal number that will be
 *	passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*declare variable*/
	unsigned long int intg;

	if (index > 64)
		return (-1);

	for (intg = 1; index > 0; index--, intg *= 2)
	;
	*n += intg;

	return (1);
}
