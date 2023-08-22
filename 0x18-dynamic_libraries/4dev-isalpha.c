#include "main.h"
#include <stdbool.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	bool isalp = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));


	return (isalp);
}
