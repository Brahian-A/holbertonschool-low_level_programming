#include <unistd.h>
#include <stdio.h>
/**
 *main- 6-print_numberz.c
 *Return: 0
 */
	int main(void)
{
char exa[] = "123456789abcdf";
int a;

	for (a = 0; a < 16; a++)
{	putchar(exa[a]);

}

	putchar('\n');
return (0);

}
