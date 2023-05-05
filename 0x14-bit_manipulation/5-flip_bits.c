#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difc = n ^ m;
	int cc = 0;



	while (difc)
	{
		cc++;
		difc &= (difc - 1);
	}

	return (cc);
}
