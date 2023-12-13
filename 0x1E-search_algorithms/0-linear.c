#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search function to search vals in array ( most be sorted )
 *
 * @array: pointer to array of elems
 * @size: size of the array
 * @value: search value
 *
 * return an idx oif sear is failure 
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	idx = 0;
	while (idx < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}
