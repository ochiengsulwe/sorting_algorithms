#include "sort.h"

/**
 * quick_sort - function that sorts in a quick way
 * @array: array available
 * @size: total size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	psy_sort(array, size, 0, size - 1);
}

/**
 * psy_sort - sorts using a partition algorithm
 * @array: array to be sorted
 * @size: the size of the array
 * @first: the first index
 * @last: the last index
 */
void psy_sort(int *array, size_t size, int first, int last)
{
	int partition;

	if (first < last)
	{
		partition = lomuto(array, size, first, last);
		psy_sort(array, size, first, partition - 1);
		psy_sort(array, size, partition + 1, last);
	}
}

/**
 * lomuto - lomuto partition algorithm
 * @array: the array
 * @size: the size of the array
 * @first: the first index of the array
 * @last: the last index of the array
 * Return: the new value of the index
 */
int lomuto(int *array, size_t size, int first, int last)
{
	int pivot, temp, x, y;

	pivot = array[last];
	y = first;
	x = first - 1;

	while (y < last)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
		y++;
	}
	if (pivot < array[x + 1])
	{
		temp = array[x + 1];
		array[x + 1] = array[last];
		array[last] = temp;
		print_array(array, size);
	}
	return (x + 1);
}
