#include "main.h"
#include <stdlib.h>

/**
 *free_grid- funcion que libera memoria
 *@grid: puntero que apunta a las filas
 *@height: filas
 *Return: nada
 */


void free_grid(int **grid, int height)
{

int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
		free(grid);



}
