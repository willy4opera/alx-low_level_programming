#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int pp, qq;

	pp = 0;
	qq = 0;

	while (dest[pp] != '\0')
		pp++;

	while (src[pp] != '\0')
	{
		dest[pp] = src[qq];
		qq++;
		pp++;
	}

	dest[qq] = '\0';

	return (dest);
}
