#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: parameter for number of variables
 * @...: parameter for the arguments
 * @separator: parameter for seperator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list arguments;

	if (!n)
	{
		printf("\n");
		return (0);
	}

	va_start(arguments, n);

	while (i--)
	{
		printf("%d", va_arg(arguments, int));

		if (i && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arguments);
	return (s);
}
