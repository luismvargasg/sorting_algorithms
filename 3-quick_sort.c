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
 * 
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
 * 
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = (lo - 1), j;

	for (j = lo; j <= (hi - 1); j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[hi]);
	print_array(array, size);
	return (i + 1);
}

/**
 * 
 */

void swap(int *a, int *b)
{ 
	int t = *a;

	*a = *b; 
	*b = t; 
}
