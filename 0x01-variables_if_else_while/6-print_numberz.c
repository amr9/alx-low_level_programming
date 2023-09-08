#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0 with int, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x = x + 10;
	}

	putchar('\n');
	return (0);
}
