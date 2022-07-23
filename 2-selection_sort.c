#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: list
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int n = 0, pos = 0;

	if (!array)
		return;
	while (i < size - 1)
	{
		n = array[i];
		j = i + 1;
		while (j < size)
		{
			if (n > array[j])
			{
				n = array[j];
				pos = j; }
			j++;
		}
		if (array[pos] != array[i])
		{
			array[pos] = array[i];
			array[i] = n;
			print_array(array, size); }
		i++;
	}
}
