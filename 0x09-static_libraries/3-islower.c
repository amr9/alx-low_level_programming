#include "main.h"

/**
 * _islower - check the code.
 * Description : checks for lowercase letters
 * takes paramter of type int
 * @c : the character to detect
 * Return: 1 for lowercase 0 anything else.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
