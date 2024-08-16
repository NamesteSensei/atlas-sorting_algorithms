#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node structure
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the Bubble sort algorithm.
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size);

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm.
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm.
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm.
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */

