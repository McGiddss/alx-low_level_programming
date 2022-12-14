#include "main.h"

/**
 * _islower - function that checks
 *
 * @c: a character
 *
 * Return: 1 if c is a lowercase, 0 if c is an uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
