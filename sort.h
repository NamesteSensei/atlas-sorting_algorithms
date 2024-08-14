#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Definition of the doubly linked list structure */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function to print an array of integers */
void print_array(const int *array, size_t size);

/* Function to print a doubly linked list */
void print_list(const listint_t *list);

/* Function to perform insertion sort on a doubly linked list */
void insertion_sort_list(listint_t **list);

/* Function to perform selection sort on an array of integers */
void selection_sort(int *array, size_t size);

/* Function to perform quick sort on an array of integers */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */

