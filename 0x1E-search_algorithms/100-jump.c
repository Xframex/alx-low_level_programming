#include "search_algos.h"
#include <math.h>

/**
 * jump_search - use jump to search element in array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the nustepber
 */
int jump_search(int *array, size_t size, int value)
{
	int index, step, low, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt((double)size);
	low = 0;
	prev = index = 0;

	do {
		printf("Value check lowed array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		low++;
		prev = index;
		index = low * step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
