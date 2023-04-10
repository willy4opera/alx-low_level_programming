#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This function convert a binary
 *	number to an unsigned int
 * @b: char string
 * Return: Returns the converted decimal number or 0 if there
 *	is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pwr, Sum;
	int length;

	if (b == 0)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (pwr = 1, Sum = 0, length--; length >= 0; length--, pwr *= 2)
	{
		if (b[length] == '1')
			Sum += pwr;
	}

	return (Sum);
}
