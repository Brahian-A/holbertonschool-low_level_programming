#include <unistd.h>

/**
 *main - 2-print_alphabet.c
 *Return: 0
 */

int main(void)
{

	char letter = "a";

	while (letter <= "z")
{
	putchar(letter);
	letter++;
}

putchar("\n");

return (0);
}
