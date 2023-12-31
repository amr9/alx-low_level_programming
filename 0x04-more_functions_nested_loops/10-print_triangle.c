#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int x = 1;
	int y;

	while (x <= size && size > 0)
	{
		y = 0;
		while (y < size - x)
		{
			_putchar(' ');
			y++;
		}
		y = 0;
		while (y < x)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
	if (x == 1)
		_putchar('\n');
}
