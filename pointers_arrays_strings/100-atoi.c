#include "main.h"

/**
 *_atoi-la funcion del maldito atoi
 *@s:el string
 *Return: solo los digitos con su multiplicacion de los signos
 *
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int resultado = 0;
	int signo = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			resultado = resultado * 10 + s[i] - '0';
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		if (s[i] == '-')
		{
			signo = signo * -1;
		}
	}
	resultado = resultado * signo;
	return (resultado);
}
