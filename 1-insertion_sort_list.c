#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: Double pointer to the head of de Doubly Linded List.
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cursor = *list, *temp;

	if (cursor == NULL || cursor->next == NULL)
		return;
	
	while (cursor != NULL)
	{
		cursor = cursor->next;
		while (cursor->n < cursor->prev->n)
		{
			temp = cursor;
			
		}
	}
}
