#include "sort.h"

/**
 * splitting - Function that splits the array
 *
 * @array: The list to be printed
 * @size: Size of the array
 * @min: First element
 * @max: Last element
 *
 * Return: Integer
 */

int splitting(int *array, size_t size, int min, int max)
{
	int x;
	int y;
	int z;
	int tmp;

	x = min - 1;
	y = min;
	z = array[max];

	for (; y < max; y++)
	{
		if (array[y] <= z)
		{
			x++;
			if (x != y)
			{
				tmp = array[x];
				array[x] = array[y];
				array[y] = tmp;
				print_array(array, size);
			}
		}
	}
	if ((x + 1) != max)
	{
		tmp = array[x + 1];
		array[x + 1] = array[max];
		array[max] = tmp;
		print_array(array, size);
	}
	return (x + 1);
}

/**
 * f_qsort - Function that sorts the array
 *
 * @array: The list to be printed
 * @size: Size of the array
 * @top: Highest element
 * @low: Lowest element
 */

void f_qsort(int *array, int low, int top, size_t size)
{
	int pt;

	if (top > low)
	{
		pt = splitting(array, size, low, top);
		f_qsort(array, low, pt - 1, size);
		f_qsort(array, pt + 1, top, size);
	}
}

/**
 * quick_sort - Write a function that sorts an array of
 * integers in ascending order using the quick sort algorithm
 *
 * @array: The list to be printed
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	f_qsort(array, 0, size - 1, size);
}
