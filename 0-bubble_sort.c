#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: Given array to be sorted.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp_value, flag;

	if (size > 1)
	{
		for (j = 0; j < (size - 1); j++)
		{
			flag = 0; /*reset the flag*/
			for (i = 0; i < ((size - 1) - j); i++)
			{
				if (array[i] > array[i + 1])
				{
					temp_value = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp_value;
					print_array(array, size);
					flag = 1; /*Raising the flag to alert an item was swapped*/
				}
			}
			if (flag == 0) /*Not raised flag in the last iteration == sorted list*/
				break; /*Reach size is not longer needed, break outer loop*/
		}
	}
}
