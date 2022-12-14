#include "main.h"

/**
 * _isalpha - checks
 *
 * @c: a character
 *
 * Return: 1 if a is either uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
