#include "search_algos.h"

/**
 * linear_skip - Function searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *fetch;

	if (list == NULL)
		return (NULL);

	fetch = list;

	do {
		list = fetch;
		fetch = fetch->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)fetch->index, fetch->n);
	} while (fetch->express && fetch->n < value);

	if (fetch->express == NULL)
	{
		list = fetch;
		while (fetch->next)
			fetch = fetch->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)fetch->index);

	while (list != fetch->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
