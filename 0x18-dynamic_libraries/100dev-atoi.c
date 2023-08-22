#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, num, leng, fig, dig;

	x = 0;
	y = 0;
	num = 0;
	leng = 0;
	fig = 0;
	dig = 0;

	while (s[leng] != '\0')
		leng++;

	while (x < leng && fig == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			dig = s[x] - '0';
			if (y % 2)
				dig = -dig;
			num = num * 10 + dig;
			fig = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			fig = 0;
		}
		x++;
	}

	if (fig == 0)
		return (0);

	return (num);
}
