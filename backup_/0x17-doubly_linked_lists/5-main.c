#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


int main(void)
{
	dlistint_t *head;
	dlistint_t *node, *node2, *node3;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	node2 = get_dnodeint_at_index(head, 0);
	node3 = get_dnodeint_at_index(0, 0);

	printf("%d\n", node->n);
	printf("%d\n", node2->n);
	printf("%d\n", node3->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
