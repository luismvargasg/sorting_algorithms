#include "sort.h"

/**
 * selection_sort_list - Function that sorts  an array of integers
 * in ascending order using the selection sort algorithm.
 *
 * @array: pointer to the head of the array to be sorted.
 * @size: size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t idx = 0, iter, idx_min;
	int min;

	if (array == NULL || size == 0)
		return;

	for (; idx < size - 1; idx++)
	{
		min = array[idx];
		for (iter = idx + 1; iter < size; iter++)
		{
			if (array[iter] < min)
			{
				min = array[iter];
				idx_min = iter;
			}
		}
		array[idx_min] = array[idx];
		array[idx] = min;
		print_array(array, size);
	}
}
