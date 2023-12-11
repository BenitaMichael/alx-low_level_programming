#include "search_algos.h"

/**
 *linear_search - Searches for a value in an array using linear search
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: If the value is not present or the array is NULL, (-1)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* If found */
		if (array[i] == value)
			return (i);
	}
	/* Value not found, return -1 */
	return (-1);
}
