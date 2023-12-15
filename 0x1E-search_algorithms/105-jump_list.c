#include <math.h>
#include "search_algos.h"

/**
 * jump_list - search a single linked list using the jump search method
 * @list: pointer to first node in linked list
 * @size: size of the list (number of nodes)
 * @value: value to be searched for
 *
 * Return: pointer to first node containing value or NULL if not present
 * or list is empty
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *hd = list;
	int num, jmp;

	if (list == NULL || size == 0)
		return (NULL);

	jmp = sqrt(size);

	while (hd->next != NULL)
	{
		list = hd;

		for (num = 0; num < jmp; num++)
		{
			hd = hd->next;
			if (hd->next == NULL)
				break;
		}

		printf("Value checked at index [%lu] = [%d]\n", hd->index, hd->n);

		if (hd->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
	       hd->index);

	while (list != NULL && list != hd->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
