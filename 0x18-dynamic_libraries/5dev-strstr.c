#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int numi, numj;

	for (numi = 0; haystack[numi] != '\0'; numi++)
	{
		for (numj = 0; needle[numj] != '\0'; numj++)
		{
			if (haystack[numi + numj] != needle[numj])
				break;
		}
		if (!needle[numj])
			return (&haystack[numi]);
	}
	return (NULL);
}
