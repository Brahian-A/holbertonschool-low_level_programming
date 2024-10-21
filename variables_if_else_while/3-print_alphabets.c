#include <unistd.h>
#include <stdio.h>
/**
 *main - 3-print_alphabet.c
 *Return: 0
 */

int main(void)
{
	char az;



	for (az = 'a'; az <= 'z'; az++)

{	putchar(az);

}
	for (az = 'A'; az <= 'Z'; az++)
{	putchar(az);

}

putchar('\n');

return (0);
}
