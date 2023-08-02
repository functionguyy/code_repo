#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - algorithm to sort a doubly linked list
 * @list: doubly linked
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	while (head != NULL)
	{
		while (head->next != NULL && (head->n > head->next->n))
		{
			/* save address of the node with lesser integer data */
			temp = head->next;

			/* move one step forward in the linked list for loop control*/
			head->next = temp->next;

			/* switch node */
			if (head->next)
				head->next->prev = temp->prev;

			temp->prev = head->prev;

			if (temp->prev)
				temp->prev->next = temp;

			/* re-link the list */
			head->prev = temp;
			temp->next = head;

			/* check and set postion of the actual head of the list */
			if (temp->prev)
				head = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		head = head->next;
	}
}
