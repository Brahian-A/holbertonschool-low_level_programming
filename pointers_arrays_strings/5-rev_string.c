#include "main.h"

/**
 *rev_string- la funcnion
 *@s: el puntero
 *
 */
void rev_string(char *s)
{
int a = 0;
int b = 0;
char c;
	while (s[a] != '\0')
	{
	a++;
	}
	a--;

	while (b < a)
{
	c = s[b];
	s[b] = s[a];
	s[a] = c;
	b++;
	a--;
}
}
