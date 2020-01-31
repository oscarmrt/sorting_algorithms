#include "sort.h"

/**
 * bubble_sort - Write a function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 *
 * @array: The list to be printed
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	size_t tmp;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
