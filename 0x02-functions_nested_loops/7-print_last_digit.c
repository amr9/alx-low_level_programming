#include "main.h"

/**
 * print_last_digit - check the code
 * Description : prints last digit
 * @c : parameter for number
 * Return: last digit of the number.
 */
int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
