#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int xx, yy;

	xx = 0;
	yy = 0;

	while (dest[xx] != '\0')
		xx++;

	while (src[yy] != '\0' && yy < n)
	{
		dest[xx] = src[yy];
		xx++;
		yy++;
	}

	dest[xx] = '\0';

	return (dest);
}
