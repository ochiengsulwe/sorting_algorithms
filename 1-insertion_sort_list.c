#include "sort.h"

/**
 * insertion_sort_list - sorts a singly linked list in an ascending order,
 * 	implementing the insertion sort algorithm.
 * @list: pointer to the list to be assorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while(current)
	{
		temp = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);
		}
		current = temp;
	}
}
