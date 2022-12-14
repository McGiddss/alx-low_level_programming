#include "main.h"
/**
 * print_alphabet - entry point
 * Return: 0
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
