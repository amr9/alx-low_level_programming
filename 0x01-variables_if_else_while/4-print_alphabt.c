#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet except the e and q
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
