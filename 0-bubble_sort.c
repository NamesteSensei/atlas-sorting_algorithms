#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: The array to sort
 * @size: Size of the array
 *
 * Description: This function sorts an array by repeatedly comparing adjacent
 * elements and swapping them if they are in the wrong order. After each pass,
 * the next largest element is placed in its correct position.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap the elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Mark that a swap occurred */
				swapped = 1;

				/* Print the array after each swap */
				print_array(array, size);
			}
		}

		/* If no elements were swapped, the array is sorted */
		if (swapped == 0)
			break;
	}
}

