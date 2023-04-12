#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * @Rarr: resulting array
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **Rarr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	Rarr = (int **) malloc(sizeof(int *) * height);

	if (Rarr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		Rarr[i] = (int *) malloc(sizeof(int) * width);
		if (Rarr[i] == NULL)
		{
			free(Rarr);
			for (j = 0; j <= i; j++)
				free(Rarr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			Rarr[i][j] = 0;
		}
	}
	return (Rarr);
}
