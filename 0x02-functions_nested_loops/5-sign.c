#include "main.h"

/**
 * print_sign - Function that prints
 *
 * @c: a character
 * Return: 1 if n > 0, 0 if == 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

