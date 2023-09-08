#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in small and capital from A to Z
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
