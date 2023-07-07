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
	unsigned long int Diff_c = n ^ m;
	int Cnt = 0;



	while (Diff_c)
	{
		Cnt++;
		Diff_c &= (Diff_c - 1);
	}

	return (Cnt);
}
