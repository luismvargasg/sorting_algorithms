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
	listint_t *temp = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (temp && temp->next != NULL)
	{
		temp = temp->next;
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			else
				temp->prev->next = temp;
			print_list(*list);
		}
	}
}
