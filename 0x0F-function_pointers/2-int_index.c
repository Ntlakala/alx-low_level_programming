#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function not return 0, or -1 if no match is found
 * or size is -tive
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array && cmp)
	{
		for (d = 0; d < size; d++)
		{
			if (cmp(array[d]) != 0)
				return (d);
		}
	}

	return (-1);
}
