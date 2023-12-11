#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: indx of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int indx, num, num2, prev;

	if (array == NULL || size == 0)
		return (-1);

	num = (int)sqrt((double)size);
	num2 = 0;
	prev = indx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
			return (indx);
		num2++;
		prev = indx;
		indx = num2 * num;
	} while (indx < (int)size && array[indx] < value);

	printf("Value found between indxes [%d] and [%d]\n", prev, indx);

	for (; prev <= indx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
