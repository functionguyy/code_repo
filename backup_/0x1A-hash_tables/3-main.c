#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


int main(void)
{
	hash_table_t *ht;
	int n;

	ht = hash_table_create(1);
	n = hash_table_set(ht, "betty", "cool");
	printf("%d\n", n);
	n = hash_table_set(ht, "hetairas", "mentioner");
	printf("collision: %d\n", n);
	n = hash_table_set(ht, "mentioner", "hetaires");
	printf("collision: %d\n", n);
	n = hash_table_set(ht, "heliotropes", "neurospora");
	printf("collision: %d\n", n);
	n = hash_table_set(ht, "neurospora", "heliotropes");	
	printf("collision: %d\n", n);
	n = hash_table_set(ht, "stylist", "subgenera");
	printf("%d\n", n);

	return (EXIT_SUCCESS);
}
