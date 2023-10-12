#ifndef SALGO
#define SALGO
#include <stdlib.h>
#include <stdio.h>

/** -----------FUNCTION PROTOTYPES----------- */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_list_arr(int *array, int L, int R);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int exponent_binary_search(int *array, size_t L, size_t R, int value);
int advanced_binary(int *array, size_t size, int value);
int adv_binary_search(int *array, size_t L, size_t R, int value);


/** ------------STRUCT PROTOTYPES------------ */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/** -----------FUNCTION PROTOTYPES----------- */
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
