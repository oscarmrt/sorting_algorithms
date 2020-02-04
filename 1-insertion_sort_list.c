#include "sort.h"

/**
 * insertion_sort_list - Write a function that sorts a doubly linked
 * list of integers in ascending order using the insertion sort algorithm
 *
 * @list: The list to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *nd = NULL;
	listint_t *swp = NULL;
	listint_t *tmp = NULL;


	if (*list == NULL || (*list)->next == NULL)
		return;

	nd = (*list)->next;
	while (nd != NULL)
	{
		if (nd->n < nd->prev->n)
		{
			tmp = nd;
			swp = tmp->prev;
			nd = nd->next;
			while (swp != NULL && tmp->n < swp->n)
			{
				if (swp->prev != NULL)
					swp->prev->next = tmp;
				tmp->prev = swp->prev;
				if (tmp->next != NULL)
					tmp->next->prev = swp;
				swp->next = tmp->next;
				swp->prev = tmp;
				tmp->next = swp;
				swp = tmp->prev;
				if ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
			}
		}
		else
			nd = nd->next;
	}
}
