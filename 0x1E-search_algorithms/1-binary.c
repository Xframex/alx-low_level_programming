#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers (array most be sorted )
  * @array: A pointer to the first element of array to search
  * @size: The number of elements in the array.
  * @value: The value to search for in sorted.
  *
  * Return: If the value is present , otherwise -1
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
