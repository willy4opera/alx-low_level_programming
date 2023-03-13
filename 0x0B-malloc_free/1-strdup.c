#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - This funtion copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: The pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *d_dup;
	unsigned int i, lenght;

	i = 0;
	lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	d_dup = malloc(sizeof(char) * (lenght + 1));

	if (d_dup == NULL)
		return (NULL);

	while ((d_dup[i] = str[i]) != '\0')
		i++;

	return (d_dup);
}
