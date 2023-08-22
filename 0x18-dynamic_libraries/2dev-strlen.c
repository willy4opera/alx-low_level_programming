#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	return (num);
}
