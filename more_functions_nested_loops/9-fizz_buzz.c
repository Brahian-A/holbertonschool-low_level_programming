#include <stdio.h>

/**
 *main- fizz buzz
 *
 *Return: 1 2 fizz
 *
 */

int main(void)
{
	int c;

for (c = 1; c <= 100; c++)

	if (c % 15 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (c % 3 == 0)
	{
		printf("Fizz ");
	}

	else if (c % 5 == 0)
	{
		printf("Buzz");
		if (c <= 99)
		putchar (' ');
	}

	else
	{
		printf("%d", c);
		if (c == 100)
		{
		break;
		}
		putchar (' ');
		}


putchar ('\n');

return (0);

}