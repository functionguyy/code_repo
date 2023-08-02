#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
int is_palindrome(listint_t **head)
{
	unsigned int len_l, loop_idx;
	listint_t *nl_head;

}
/**
 * listint_len - return the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: the numbers of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n;

	n = 0;
	if (!h)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
