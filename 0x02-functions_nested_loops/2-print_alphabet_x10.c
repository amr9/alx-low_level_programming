#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Description : prints alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);

			x++;
		}

		count++;
		_putchar('\n');
		continue;
	}
}
