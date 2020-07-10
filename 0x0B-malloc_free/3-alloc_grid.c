#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimen array of int
* @height : row
* @witdth : column
* Return: a pointer
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int col, row;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(*p) * height);
	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{

		p[row] = (int *) malloc(sizeof(**p) * width);
		if (!p[row])
		{
			while (row >= 0)
				free(p[row--]);
			free(p);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			p[row][col] = 0;
	}
	return (p);
}
