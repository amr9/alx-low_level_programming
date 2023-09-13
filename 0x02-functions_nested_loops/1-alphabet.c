#include "main.h"

/**
 * main - check the code
 * description : prints alphabet from a to z.
 * Return: nothing.
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);

		x++;
	}
	_putchar('\n');
}
