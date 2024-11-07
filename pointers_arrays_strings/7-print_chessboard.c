#include "main.h"

/**
 *print_chessboard- funcion que imprime un tablero de ajedrez
 *@a: array de 8 caracteres que contiene el formato del ajedrez
 *
 *Return: tablero
 *
 */

void print_chessboard(char (*a)[8])
{
	int f, c;

	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[f][c]);
		}
	_putchar('\n');
	}
}
