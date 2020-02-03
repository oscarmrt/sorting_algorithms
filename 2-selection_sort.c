#include "sort.h"

/**
 * selection_sort - Write a function that sorts an array of
 * integers in ascending order using the selection sort algorithm
 *
 * @array: The list to be printed
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t tmp;
	size_t swp;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size + 1; x++)
	{
		tmp = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[tmp])
				tmp = y;
		}
		if (tmp != x)
		{
			swp = array[x];
			array[x] = array[tmp];
			array[tmp] = swp;
			print_array(array, size);
		}
	}
}
