#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>
#include <stdio.hh>

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
