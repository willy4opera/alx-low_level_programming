#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tp;
	int sht;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tp = n, sht = 0; (tp >>= 1) > 0; sht++)
		;

	for (; sht >= 0; sht--)
	{
		if ((n >> sht) & 1)
			printf("1");
		else
			printf("0");
	}
}
