#include "variadic_functions.h"
/**
 * sum_them_all - sum values
 * @n: parameter for number of variables
 * @...: parameter for the arguments
 * Return: integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list arguments;

	if (!n)
	{
		return (0);
	}

	va_start(arguments, n);

	while (i--)
	{
		s += va_arg(arguments, int);
	}
	va_end(arguments);
	return (s);
}
