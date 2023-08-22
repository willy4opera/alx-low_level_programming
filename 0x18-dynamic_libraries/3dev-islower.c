#include "main.h"
#include<stdbool.h>

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	bool islower = (c >= 'a' && c <= 'z');

	return (islower);
}
