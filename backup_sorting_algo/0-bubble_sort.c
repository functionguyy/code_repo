#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sort an array in ascending order.
 * @array: Array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap correctly.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	bool swapped;

	if (array == NULL || size < 2)
		return;

	while (swapped != false)
	{
		swapped = false;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
	}
}
