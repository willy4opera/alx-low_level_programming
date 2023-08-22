#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int num, x, fig, flag;

	fig = 0;

	for (num = 0; s[num] != '\0'; num++)
	{
		flag = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[num] == accept[x])
			{
				fig++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (fig);
		}
	}

	return (0);
}
