#include "main.h"
#include <stdbool.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	bool ispos, isneg;

	if (n >= 0)
	{
		ispos = n;
		return (ispos);
	}
	isneg = -n;
	return (isneg);
}
