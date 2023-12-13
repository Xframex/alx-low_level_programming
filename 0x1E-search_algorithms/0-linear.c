#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to array of elements
 * @size: size of the array
 * @value: search value
 *
 * Return: index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	idx = 0;
	while (idx < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}
