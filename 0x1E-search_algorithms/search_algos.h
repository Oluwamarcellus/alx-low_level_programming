#ifndef SALGO
#define SALGO
#include <stdlib.h>
#include <stdio.h>

/* FUNCTION PROTOTYPES**/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_list(int *array, int L, int R);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int exponent_binary_search(int *array, size_t L, size_t R, int value);



#endif
