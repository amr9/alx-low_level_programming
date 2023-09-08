#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Write a program that prints all the hexanumbers in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
