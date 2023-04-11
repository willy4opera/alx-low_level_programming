#include <stdio.h>
#include "main.h"

/**
 * flip_bits - This Function flips bits to convert
 *	one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int D_Countr;
	unsigned long int D_Diff;

	D_Diff = n ^ m;
	D_Countr = 0;

	while (D_Diff)
	{
		D_Countr++;
		D_Diff &= (D_Diff - 1);
	}

	return (D_Countr);
}
