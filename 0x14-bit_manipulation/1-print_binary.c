#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int Top_v;
	int Sht_v;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (Top_v = n, Sht_v = 0; (Top_v >>= 1) > 0; Sht_v++)
		;

	for (; Sht_v >= 0; Sht_v--)
	{
		if ((n >> Sht_v) & 1)
			printf("1");
		else
			printf("0");
	}
}
