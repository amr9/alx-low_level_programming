#include "main.h"

/**
 * _isalpha - check the code.
 * desciption : check for alphabetical characters
 * @c : parameter for the character
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
