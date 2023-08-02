/**
 * selection_sort - implementation of the selection sort algorithm
 * @array: array of integers
 * @size: number of integers in arrays
 *
 * Return: Nothing.
 */
#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if ((array == NULL) || (size < 2))
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			/* compare to find smallest value in array */
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		/* perform swap */
		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
