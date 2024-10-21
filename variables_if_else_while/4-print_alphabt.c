#include <unistd.h>
#include <stdio.h>
/**
 *main - 4-print_alphabt.c
 *Return: 0
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	if (az != 'e' && az != 'q')
{
	putchar(az);
}
{
	putchar('\n');
}
	return (0);
}
