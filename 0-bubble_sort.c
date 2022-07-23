#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 *
 * @array: array
 * @size: size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int aux = 0, swap_number = 0;

	if (array != NULL)
	{
	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			swap_number++;
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
			print_array(array, size);
		}
		i++;
		if (swap_number > 0 && i == size - 1)
		{
			i = 0;
			swap_number = 0;
		}
	}
	}
}
