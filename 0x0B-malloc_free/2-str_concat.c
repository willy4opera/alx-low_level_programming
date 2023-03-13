#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *ssl1, char *ssl2)
{
	char *ssl3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (ssl1 && sssl1[len1])
		len1++;
	while (ssl2 && ssl2[len2])
		len2++;

	ssl3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ssl3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (ssl1)
	{
		while (i < len1)
		{
			ssl3[i] = ssl1[i];
			i++;
		}
	}

	if (ssl2)
	{
		while (i < (len1 + len2))
		{
			ssl3[i] = ssl2[j];
			i++;
			j++;
		}
	}
	ssl3[i] = '\0';

	return (ssl3);
}
