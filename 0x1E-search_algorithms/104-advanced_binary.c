#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t d_half = size / 2;
	size_t num;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (num = 0; num < size; num++)
		printf("%s %d", (num == 0) ? ":" : ",", array[num]);

	printf("\n");

	if (d_half && size % 2 == 0)
		d_half--;

	if (value == array[d_half])
	{
		if (d_half > 0)
			return (rec_search(array, d_half + 1, value));
		return ((int)d_half);
	}

	if (value < array[d_half])
		return (rec_search(array, d_half + 1, value));

	d_half++;
	return (rec_search(array + d_half, size - d_half, value) + d_half);
}

/**
 * advanced_binary - Function calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
