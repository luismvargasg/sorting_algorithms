#include "sort.h"

/**
 * swap_nodes - Function to swap two adjacents nodes in a doubly linked list.
 *
 * @node_1: First node.
 * @node_2: Second node.
 * @list: Pointer to the head of the list.
 *
 * Return: Nothing
 */

void swap_nodes(listint_t *node_1, listint_t *node_2, listint_t **list)
{
	if (node_2->next != NULL)
		node_2->next->prev = node_1;

	if (node_1->prev != NULL)
	{
		node_2->prev = node_1->prev;
		node_2->prev->next = node_2;
	}
	else
	{
		node_2->prev = NULL;
		*list = node_2;
	}
	node_1->prev = node_1->next;
	node_1->next = node_2->next;
	node_1->prev->next = node_1;
	node_2->next = node_1;
	print_list(*list);
}

/**
 * cocktail_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Cocktail shaker sort algorithm.
 *
 * @list: Pointer to the head of the list.
 *
 * Return: Nothing
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *cursor = NULL;
	int flag = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cursor = *list;
	while (flag != 0)
	{
		flag = 0;
		while (cursor != NULL && cursor->next != NULL)
		{
			if (cursor->n > cursor->next->n)
			{
				swap_nodes(cursor, cursor->next, list);
				flag = 1;
			}
			else
				cursor = cursor->next;
		}
		while (cursor->prev != NULL)
		{
			if (cursor->n < cursor->prev->n)
			{
				swap_nodes(cursor->prev, cursor, list);
				flag = 1;
			}
			else
				cursor = cursor->prev;
		}
	}
}
