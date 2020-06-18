#include "sort.h"
#include <stdlib.h>
int biggest_n(int *array, size_t size);

/**
 * biggest_n - finds biggest number in the array
 *
 * @array: Given array to be sorted.
 * @size: Size of the array.
 *
 * Return: biggest number (int k).
 */

int biggest_n(int *array, size_t size)
{
	int i = 1, k = 0;

	k = array[0];
	while (i < (int)size)
	{
		if (array[i] > k)
			k = array[i];
		i++;
	}
	return (k);
}
/**
 * counting_sort - function that sorts an array of non-negative integers
 * in ascending order using the counting sort algorithm.
 *
 * @array: Given array to be sorted.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */

void counting_sort(int *array, size_t size)
{
	int k = 0, i = 0, j = 0, n = 0;
	int *counting_array = NULL, *sum_array = NULL, *sorted_array = NULL;

	if (array == NULL || size == 0)
		return;
	k = biggest_n(array, size);
	counting_array = malloc(sizeof(int) * (k + 1));
	sum_array = malloc(sizeof(int) * (k + 1));
	if (counting_array == NULL || sum_array == NULL)
		return;
	for (i = 0; i <= k; i++)
	{
		counting_array[i] = 0;
		sum_array[i] = 0;
	}
	sorted_array = malloc(sizeof(int) * (size));
	if (sorted_array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		n = array[i];
		counting_array[n] += 1;
	}
	sum_array[0] = counting_array[0];
	for (i = 1; i <= k; i++)
		sum_array[i] = sum_array[i - 1] + counting_array[i];
	n = 0;
	print_array(sum_array, k + 1);

	for (i = size; i > 0; i--)
	{
		n = array[i - 1];
		j = sum_array[n] - 1;
		sorted_array[j] = n;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = sorted_array[i];
}
