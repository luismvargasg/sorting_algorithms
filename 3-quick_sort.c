#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: pointer to the head of the array to be sorted.
 * @size: size of the array.
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_rec(array, 0, size - 1, size);
}

/**
 * quick_sort_rec - Recursive function to sort the list.
 *
 * @array: Pointer to the array.
 * @lo: Starting index.
 * @hi: Ending index.
 * @size: Size of the array
 *
 * Return: Nothing.
 */

void quick_sort_rec(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quick_sort_rec(array, lo, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, hi, size);
	}
}

/**
 * partition - This function takes last element as pivot and
 * places and places all smaller elements than pivot to the
 * left, and all greater elements to the right.
 *
 * @array: Pointer to the array.
 * @lo: Starting index.
 * @hi: Ending index.
 * @size: Size of the array
 *
 * Return: The next position of the index in the array.
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = (lo - 1), j;

	for (j = lo; j <= (hi - 1); j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (&array[i] != &array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (&array[i + 1] != &array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - Function to swap to elements of the array.
 *
 * @a: Pointer to the first element to be swapped.
 * @b: Pointer to the second element to be swapped.
 *
 * Return: Nothing.
 */

void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
