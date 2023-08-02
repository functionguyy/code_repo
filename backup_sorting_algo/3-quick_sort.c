#include "sort.h"
int partition(int *array, int low, int high, size_t size);
void _quicksort(int *array, int low, int high, size_t size);

/**
 * quick_sort - a sorting function based on the quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	int low, high;

	if (array == NULL || size < 2)
		return;

	low = 0;
	high = size - 1;

	_quicksort(array, low, high, size);

}
/**
 * _quicksort - implementation of the quick sort algorithm
 * @array: the array to be sorted
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @size: the size of the array
 */

void _quicksort(int *array, int low, int high, size_t size)
{
	int pivot_idx;

	if (low >= high || low < 0)
		return;

	pivot_idx = partition(array, low, high, size);

	_quicksort(array, low, pivot_idx - 1, size);
	_quicksort(array, pivot_idx + 1, high, size);

}
/**
 * partition - implementation of the lomuto partition scheme
 * @array: array to be sorted
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @size: the size of the array
 *
 * Return: index of partition element
 */

int partition(int *array, int low, int high, size_t size)
{
	int sub_pivot_idx;
	int pivot, j, temp;

	pivot = array[high];


	sub_pivot_idx = low - 1;

	for (j = low; j < high; j++)
	{
		/* check selected pivot integrity for new sub_array */
		if (array[j] <= pivot)
		{
			/* swap elements into sub-array */
		
			sub_pivot_idx++;
			temp = array[sub_pivot_idx];
			array[sub_pivot_idx] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}

	/* move pivot element in position to create sub-array */
	sub_pivot_idx++;
	temp = array[high];
	array[high] = array[sub_pivot_idx];
	array[sub_pivot_idx] = temp;
	print_array(array, size);

	return (sub_pivot_idx);
}
