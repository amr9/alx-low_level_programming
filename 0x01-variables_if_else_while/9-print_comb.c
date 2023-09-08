#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all
 * possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int x = 48;

	while (x <= 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
