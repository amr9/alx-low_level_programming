#include "main.h"
/** _memset -  fills memory with a constant byte.
 * @s - character
 * @b - character
 * @n - unsigned int
 * returns - pinter to the next bit.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0;i < n;i++)
	{
		s[i] = b;
	}

	return s;
}


