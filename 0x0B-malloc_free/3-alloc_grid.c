#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * @2darr: resulting array
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **2darr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	2darr = (int **) malloc(sizeof(int *) * height);

	if (2darr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		2darr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(2darr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			2darr[i][j] = 0;
		}
	}
	return (2darr);
}
