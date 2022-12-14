#include "main.h"

/**
 * _islower - Function that checks 
 *
 * @c: a character
 *
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
