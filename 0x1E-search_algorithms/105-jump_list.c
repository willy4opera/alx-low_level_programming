#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Function searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t indx, num, num1;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	num1 = (size_t)sqrt((double)size);
	indx = 0;
	num = 0;

	do {
		prev = list;
		num++;
		indx = num * num1;

		while (list->next && list->indx < indx)
			list = list->next;

		if (list->next == NULL && indx != list->indx)
			indx = list->indx;

		printf("Value checked at index [%d] = [%d]\n", (int)indx, list->n);

	} while (indx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->indx, (int)list->indx);

	for (; prev && prev->indx <= list->indx; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->indx, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
