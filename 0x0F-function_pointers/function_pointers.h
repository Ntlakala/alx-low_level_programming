#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>
#include <stddef.h> /* for size_t */

/* function that prints a name */
void print_name(char *name, void (*f)(char *));

/* function that excuts functn givn as a parmeter on each elemnt of an aray */
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

