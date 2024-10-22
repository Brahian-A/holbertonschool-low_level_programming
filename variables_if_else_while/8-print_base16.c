#include <unistd.h>
#include <stdio.h>
/**
 *main- 8 exadecimaels 
 *Return: 0
 */
	int main(void)
{
char exa[] = "0123456789abcdef";
int a;

	for (a = 0; a < 16; a++)
{	putchar(exa[a]);

}

	putchar('\n');
return (0);

}
