#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: list
 */

void insertion_sort_list(listint_t **list)
{
	size_t i = 0;
	int aux = 0, swap_number = 0;

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
