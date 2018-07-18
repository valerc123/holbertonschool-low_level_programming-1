#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a grid
 * @width: 
 * @height:
 *
 * Return: pointer to new str or 0 if err
 */
int **alloc_grid(int width, int height)
{
	int **ar, r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (!ar)
	{
		free(ar);
		return (0);
	}

	for (r = 0; r < height; r++)
	{
		ar[r] = malloc(width * sizeof(int));
		if (!ar[r])
		{
			while(r >= 0)
				free(ar[r--]);
			free(ar);
		}
	}

	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			ar[r][c] = 0;
	return (ar);
}
