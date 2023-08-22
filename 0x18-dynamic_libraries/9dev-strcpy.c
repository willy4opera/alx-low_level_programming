#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int leng, numi;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (numi = 0; numi < leng; numi++)
	{
		dest[numi] = src[numi];
	}
	dest[numi] = '\0';

	return (dest);
}
