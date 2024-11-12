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
	int c, f;

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
					return (NULL);
			}

				for (f = 0; f < height; f++)
				{
					for (c = 0; c < width; c++)
					{
						matriz[f][c] = 0;
					}
				}
		return (matriz);
}
