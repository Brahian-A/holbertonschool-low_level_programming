#include "main.h"
#include <stdlib.h>


/**
 *alloc_grid- funcion que crea una array vidimencional
 *@width: columnas del array
 *@height: filas del array
 *Return: el array
 */

int **alloc_grid(int width, int height)
{
	int **matriz;
	int c, f, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		matriz = malloc(height * sizeof(int *));

		if (matriz == NULL)
		{
			return (NULL);
		}


			for (f = 0; f < height; f++)
			{
				matriz[f] = malloc(width * sizeof(int));
				if (matriz[f] == NULL)
				{
			

				for (i = 0; i < f; i++)
				{
					free (matriz[i]);
				}
					free (matriz);
					return (NULL);
			}	}	

	for (f = 0; f < height; f++)
	{
		for (c = 0; c < width; c++)
		{
			matriz[f][c] = 0;
		}
	}
		return (matriz);
}
