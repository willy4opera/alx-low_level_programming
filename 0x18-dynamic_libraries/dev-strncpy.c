#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	num = 0;

	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}

	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}

	return (dest);
}
