#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation
 *	of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int buf_m;
	int Shift_Reg;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (buf_m = n, Shift_Reg = 0; (buf_m >>= 1) > 0; Shift_Reg++)
		;

	for (; Shift_Reg >= 0; Shift_Reg--)
	{
		if ((n >> Shift_Reg) & 1)
			printf("1");
		else
			printf("0");
	}
}
