#include "sort.h"

/**
 * bubble_sort - sorts an array using the buuble sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array to be sorted.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, k;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			for (k = 0; k < size; k++)
				printf("%d", array[k]);
		}
		printf("\n");
	}
}
