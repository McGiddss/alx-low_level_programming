#include "main.h"

/**
 * print_last_digit - Function that prints
 *
 * @k: character
 *
 * Return: k % 10 if k > 0 and k < 0
 */

int print_last_digit(int k)
{
	int last = k % 10;

	if (k < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
